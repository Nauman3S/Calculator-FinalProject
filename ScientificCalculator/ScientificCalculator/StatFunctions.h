#include<iostream>
#include<math.h>

using namespace std;

class statistical{
protected:
	double *dataArray;
	int size;
public:
	statistical(double a[], int s){
		dataArray = new double[s];
		for (int i = 0; i<s; i++){
			dataArray[i] = a[i];
		}

		size = s;
	}
	virtual void print() = 0;
};
class Mean : public statistical{

public:

	Mean(double a[]=0, int s=0) :statistical(a, s){

	}
	double mean()
	{
		double Sum = dataArray[0];
		for (int i = 1; i < size; ++i) {
			Sum += dataArray[i];
		}
		return Sum / size;
	}
	void print(){
		cout << mean();
	}
};
class Median : public statistical{
public:
	Median(double a[], int s) :statistical(a, s){
	}
	void print(){
		// Allocate an array of the same size and sort it.
		double* Sorted = new double[size];
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
		delete[] Sorted;
		cout << Median;
	}
};
class Mode : public statistical{
public:
	Mode(double a[], int s) :statistical(a, s){
	}
	void print(){
		int* ipRepetition = new int[size];
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
		delete[] ipRepetition;
		cout << dataArray[iMaxRepeat];
	}
};

class Variance : public Mean{
public:
	Variance(double a[], int s) :Mean(a, s){

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
	
	void print(){
		
		cout << var();
		
	}

};

class Standard_Deviation : public Variance
{
public:
	Standard_Deviation(double a[], int s) :Variance(a, s){

	}

	void print(){


		
		cout <<  sqrt(var());
	}

};
int main()
{
//double d[] = { 2, 2, 4, 2, 4 };
	//int s = 5;
	int a;
	cout<<"What do you want to find:"<<endl<<"*********************************"<<endl<<"Press 1 for Mean"<<endl<<"Press 2 for Mode"<<endl<<"Press 3 for Median"<<endl<<"Press 4 for Variance"<<endl<<"Press 5 for Standard Deviation"<<endl<<"*********************************"<<endl;
	cin>>a;
	cout<<"*********************************"<<endl;
	double d[50];
	int s;
	cout<<endl<<"How many numbers do you want to enter:";
	cin>>s;
	cout<<endl;
	cout<<"*********************************"<<endl;
	for(int i=0;i<s;i++)
	{
		
		cout<<"Enter "<<i+1<<"th number:";
		cin>>d[i];
	}
	
	if(a==1)
	{
		Mean mean(d, s);// = new Mean(d,s);
		cout<<"*********************************"<<endl;
		//cout<<endl;
		cout << endl << "Mean is = ";
		mean.print();
	}
	
	if(a==2)
	{
		Mode mode(d, s);// = new Mode(d,s);
		cout<<"*********************************"<<endl;
		//cout<<endl;
		cout << endl << "Mode is = ";
		mode.print();
	}
	if(a==3)
	{
		Median median(d, s);// = new Median(d,s);	
		cout<<"*********************************"<<endl;
		cout<<endl;
		cout << "Median is = ";
		median.print();
	}
	if(a==4)
	{
		Variance variance(d, s);
		cout<<"*********************************"<<endl;
		cout << endl << "Variance is = ";
		variance.print();
	}
	if(a==5)
	{
	Standard_Deviation standard_deviation(d, s);
	cout<<"*********************************"<<endl;
	cout << endl << "Standard Deviation is = ";
	standard_deviation.print();
	}
	cout << endl;
	//system("pause");

int a11;
cin>>a11;
}
