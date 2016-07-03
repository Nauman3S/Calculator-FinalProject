
#include<math.h>

//using namespace std;

public ref class statistical abstract {
protected:
	array<double>^ dataArray;
	int size;
public:
	statistical(array<double>^a) {
		int s = a->Length;
		dataArray = gcnew array<double>(s);
		for (int i = 0; i<s; i++) {
			dataArray[i] = a[i];
		}

		size = s;
	}
	virtual double Calculate() = 0;
};
ref class Mean : public statistical {

public:

	Mean(array<double>^a) :statistical(a) {

	}
	double mean()
	{
		double Sum = dataArray[0];
		for (int i = 1; i < size; ++i) {
			Sum += dataArray[i];
		}
		return Sum / size;
	}
	double Calculate() override {
		return mean();
	}
};
ref class Median : public statistical {
public:
	Median(array<double>^a) :statistical(a) {
	}
	double median() {///double Calculate()
					 // Allocate an array of the same size and sort it.
		//double* Sorted = new double[size];
		array<double>^Sorted = gcnew array<double>(size);
		for (int i = 0; i < size; ++i) {
			Sorted[i] = dataArray[i];
		}
		for (int i = size - 1; i > 0; --i) {
			for (int j = 0; j < i; ++j) {
				if (Sorted[j] > Sorted[j + 1]) {
					double Temp = Sorted[j];
					Sorted[j] = Sorted[j + 1];
					Sorted[j + 1] = Temp;
				}
			}
		}
		// Middle or average of middle values in the sorted array.
		double Median = 0.0;
		if ((size % 2) == 0) {
			Median = (Sorted[size / 2] + Sorted[(size / 2) - 1]) / 2.0;
		}
		else {
			Median = Sorted[size / 2];
		}
		//delete[] Sorted;
		return Median;
	}
};
ref class Mode : public statistical {
public:
	Mode(array<double>^a) :statistical(a) {
	}
	double Calculate() override {
		//int* ipRepetition = new int[size];
		array<double>^ipRepetition = gcnew array<double>(size);
		for (int i = 0; i < size; ++i) {
			ipRepetition[i] = 0;
			int j = 0;
			//bool bFound = false;
			while ((j < i) && (dataArray[i] != dataArray[j])) {
				if (dataArray[i] != dataArray[j]) {
					++j;
				}
			}
			++(ipRepetition[j]);
		}
		int iMaxRepeat = 0;
		for (int i = 1; i < size; ++i) {
			if (ipRepetition[i] > ipRepetition[iMaxRepeat]) {
				iMaxRepeat = i;
			}
		}
		//delete[] ipRepetition;
		//cout << dataArray[iMaxRepeat];
		return dataArray[iMaxRepeat];
	}
};

ref class Variance : public Mean {
public:
	Variance(array<double>^a) :Mean(a) {

	}

	double var()
	{
		double a = mean();
		//cout << a << endl;
		double temp = 0;
		int max = size;
		for (int i = 0; i<max; i++)
		{
			temp += (dataArray[i] - a) * (dataArray[i] - a);
		}
		double v = temp / max;
		return v;
	}

	double Calculate() override {

		return var();

	}

};

ref class Standard_Deviation : public Variance
{
public:
	Standard_Deviation(array<double>^a) :Variance(a) {

	}

	double Calculate() override {



		return sqrt(var());
	}

};
//////Adapter


static array<double>^ ManagedArray(double* arr, int size) {
	using namespace System;
	array<double>^ retval = gcnew array<double>(size);
	for (int ix = 0; ix < size; ++ix)
		retval[ix] = (int)*arr++;
	return retval;
}

//int main(array<System::String ^> ^args) {
//	long arr[] = { 1, 2, 3, 4 };
//	array<int>^ marr = MakeManaged(arr, 4);
//	for (int ix = 0; ix < marr->Length; ++ix)
//		Console::WriteLine(marr[ix]);
//	Console::ReadLine();
//	return 0;
//}

void UnManage(array<double>^ managed, double* dest) {
	//double *arr=new double [managed->Length];
	for (int i = 0; i < managed->Length; i++) {
		dest[i] = managed[i];
	}
	//System::Runtime::InteropServices::Marshal::Copy(managed,0,arr,(managed->Length));

}

/////////////////
//int main()
//{
////double d[] = { 2, 2, 4, 2, 4 };
//	//int s = 5;
//	int a;
//	cout<<"What do you want to find:"<<endl<<"*********************************"<<endl<<"Press 1 for Mean"<<endl<<"Press 2 for Mode"<<endl<<"Press 3 for Median"<<endl<<"Press 4 for Variance"<<endl<<"Press 5 for Standard Deviation"<<endl<<"*********************************"<<endl;
//	cin>>a;
//	cout<<"*********************************"<<endl;
//	double d[50];
//	int s;
//	cout<<endl<<"How many numbers do you want to enter:";
//	cin>>s;
//	cout<<endl;
//	cout<<"*********************************"<<endl;
//	for(int i=0;i<s;i++)
//	{
//		
//		cout<<"Enter "<<i+1<<"th number:";
//		cin>>d[i];
//	}
//	
//	if(a==1)
//	{
//		Mean mean(d, s);// = new Mean(d,s);
//		cout<<"*********************************"<<endl;
//		//cout<<endl;
//		cout << endl << "Mean is = ";
//		mean.Calculate();
//	}
//	
//	if(a==2)
//	{
//		Mode mode(d, s);// = new Mode(d,s);
//		cout<<"*********************************"<<endl;
//		//cout<<endl;
//		cout << endl << "Mode is = ";
//		mode.Calculate();
//	}
//	if(a==3)
//	{
//		Median median(d, s);// = new Median(d,s);	
//		cout<<"*********************************"<<endl;
//		cout<<endl;
//		cout << "Median is = ";
//		median.Calculate();
//	}
//	if(a==4)
//	{
//		Variance variance(d, s);
//		cout<<"*********************************"<<endl;
//		cout << endl << "Variance is = ";
//		variance.Calculate();
//	}
//	if(a==5)
//	{
//	Standard_Deviation standard_deviation(d, s);
//	cout<<"*********************************"<<endl;
//	cout << endl << "Standard Deviation is = ";
//	standard_deviation.Calculate();
//	}
//	cout << endl;
//	//system("pause");
//
//int a11;
//cin>>a11;
//}