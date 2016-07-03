#include<math.h>
#include<iostream>
using namespace std;


double der(double x, double c[], int n)
{
    double d = 0;
    for (int i = 0; i < n; i++)
        d += pow(x, i) * c[i];
    return d;
}

int main(void){
	double d[]={1,2,2}; ///variable exponents
	cout<<der2(3,d,2);
	
	
}
