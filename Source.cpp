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

	Mean(double a[], int s) :statistical(a, s){

	}
	void print(){
		double Sum = dataArray[0];
		for (int i = 1; i < size; ++i) {
			Sum += dataArray[i];
		}
		cout << Sum / size;
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
class Variance : public statistical{
public:
	Variance(double a[], int s) :statistical(a, s){

	}
	void print(){
		double Sum = dataArray[0];
		for (int i = 1; i < size; ++i) {
			Sum += dataArray[i];
		}
		//cout<< Sum/size;
		double a = (Sum / size);
		double temp = 0;
		int max = size;
		for (int i = 0; i<max; i++)
		{
			temp += (dataArray[i] - a) * (dataArray[i] - a);
		}
		cout << temp / max;
	}
};
class Standard_Deviation : public statistical{
public:
	Standard_Deviation(double a[], int s) :statistical(a, s){

	}
	void print(){
		double Sum = dataArray[0];
		for (int i = 1; i < size; ++i) {
			Sum += dataArray[i];
		}
		//cout<< Sum/size;
		double a = (Sum / size);
		double temp = 0;
		int max = size;
		for (int i = 0; i<max; i++)
		{
			temp += (dataArray[i] - a) * (dataArray[i] - a);
		}
		//cout << temp / max<<endl;
		
		cout <<sqrt(temp/max)<<endl;
	}
};
int main(){
	double d[] = { 1.1, 2.2, 3.3, 4.4, 2.2, 5.5 };
	int s = 6;
	Mean mean(d, s);// = new Mean(d,s);
	Median median(d, s);// = new Median(d,s);
	Mode mode(d, s);// = new Mode(d,s);
	Variance variance(d, s);
	Standard_Deviation standard_deviation(d,s);
	
	int x;
	cout<<"what do you want to find:"<<endl<<"Press 1 for median "<<endl<<"Press 2 for mode "<<endl<<"Press 3 for mean"<<endl<<"Press 4 for variance"<<endl<<"Press 5 for standard deviation"<<endl;
	cin>>x;
	
	if(x==1)
	{
		cout << "Median is: ";
		median.print();
	}
	if(x==2)
	{
		
	
		cout << endl << "Mode : ";
		mode.print();
	
	}
	if(x==3)
	{
		
	
		cout << endl << "Mean : ";
		mean.print();
	}
	if(x==4)
	{
		
	
		cout << endl << "Variance : ";
		variance.print();
	
	}
	
	if(x==5)
	{
		cout<<endl<<"Standard_Deviation : ";
		standard_deviation.print();
	}

}
