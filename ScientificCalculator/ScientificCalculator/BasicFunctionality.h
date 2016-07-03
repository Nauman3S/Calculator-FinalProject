#include<windows.h>
#include<time.h>
#include<math.h>
#include<iostream>
//using namespace std;

class tester {

};
class calculator
{
      protected:
                double*array;
                int total;
      public:
		  
             virtual double calculate()=0;
             calculator(double e[],int u)
             {
                  total=u;
                  array=new double[u];
                  for(int j=0;j<u;j++)
                  {
                          array[j]=e[j];
                  }
             }
                  
};
class addition :public calculator
{
      private:
      
      public:
             addition(double e[],int u):calculator(e,u){}
             double calculate()
             {
                  double add=array[0];
                  for(int j=1;j<total;j++)
                  {
                          add+=array[j];
                  }
                  return add;
             }
};
class calculator1
{
      protected:
                double*array1;
                int total1;
      public:
             virtual double calculate()=0;
             calculator1(double e1[],int u1)
             {
                  total1=u1;
                  array1=new double[u1];
                  for(int j=0;j<u1;j++)
                  {
                          array1[j]=e1[j];
                  }
             }
                  
};
class multiply : public calculator1
{
      private:
      
      public:
             multiply(double e1[],int u1):calculator1(e1,u1){}
             double calculate()
             {
                  double mul=array1[0];
                  for(int j=1;j<total1;j++)
                  {
                          mul*=array1[j];
                  }
                  return mul;
             }
};
class calculator2
{
      protected:
                double*array2;
                int total2;
      public:
             virtual double calculate()=0;
             calculator2(double e2[],int u2)
             {
                  total2=u2;
                  array2=new double[u2];
                  for(int j=0;j<u2;j++)
                  {
                          array2[j]=e2[j];
                  }
             }
                  
};
class subtract : public calculator2
{
      private:
      
      public:
             subtract(double e2[],int u2):calculator2(e2,u2){}
             double calculate()
             {
                  double sub=array2[0];
                  for(int j=1;j<total2;j++)
                  {
                          sub-=array2[j];
                  }
				  return sub;
             }
};
class calculator3
{
      protected:
                double*array3;
                int total3;
      public:
             virtual double calculate()=0;
             calculator3(double e3[],int u3)
             {
                  total3=u3;
                  array3=new double[u3];
                  for(int j=0;j<u3;j++)
                  {
                          array3[j]=e3[j];
                  }
             }
                  
};
class divide : public calculator3
{
      private:
      
      public:
             divide(double e3[],int u3):calculator3(e3,u3){}
             double calculate()
             {
                  double div=array3[0];
                  for(int j=1;j<total3;j++)
                  {
                          div/=array3[j];
                  }
				  return div;
             }
};
class calculator4
{
      protected:
                double*array4;
                int total4;
      public:
             virtual double calculate()=0;
             calculator4(double e4[],int u4)
             {
                  total4=u4;
                  array4=new double[u4];
                  for(int j=0;j<u4;j++)
                  {
                          array4[j]=e4[j];
                  }
             }
                  
};
class squareroot : public calculator4
{
      private:
      
      public:
             squareroot(double e4[],int u4):calculator4(e4,u4){}
             double calculate()
             {
                  double sq=array4[0];
                  for(int j=1;j<total4;j++)
                  {
                          sq+=array4[j];
                  }
				  return sqrt(sq);
             }
};
class calculator5
{
      protected:
                double*array5;
                int total5;
      public:
             virtual double calculate()=0;
             calculator5(double e5[],int u5)
             {
                  total5=u5;
                  array5=new double[u5];
                  for(int j=0;j<u5;j++)
                  {
                          array5[j]=e5[j];
                  }
             }
                  
};
class square : public calculator5
{
      private:
      
      public:
             square(double e5[],int u5):calculator5(e5,u5){}
             double calculate()
             {
                  double sqr=array5[0];
                  for(int j=1;j<total5;j++)
                  {
                          sqr+=array5[j];
                  }
				  return sqr*sqr;
             }
};
class calculator6
{
      protected:
                double*array6;
                int total6;
      public:
             virtual double calculate()=0;
             calculator6(double e6[],int u6)
             {
                  total6=u6;
                  array6=new double[u6];
                  for(int j=0;j<u6;j++)
                  {
                          array6[j]=e6[j];
                  }
             }
                  
};
class logarithm : public calculator6
{
      private:
      
      public:
             logarithm(double e6[],int u6):calculator6(e6,u6){}
             double calculate()
             {
                  double lo=array6[0];
                  for(int j=1;j<total6;j++)
                  {
                          lo+=array6[j];
                  }
				  return log10(lo);
             }
};
class calculator7
{
      protected:
                double*array7;
                int total7;
      public:
             virtual double calculate()=0;
             calculator7(double e7[],int u7)
             {
                  total7=u7;
                  array7=new double[u7];
                  for(int j=0;j<u7;j++)
                  {
                          array7[j]=e7[j];
                  }
             }
                  
};
class sinert : public calculator7
{
      private:
      
      public:
             sinert(double e7[],int u7):calculator7(e7,u7){}
             double calculate()
             {
                  double si=array7[0];
                  for(int j=1;j<total7;j++)
                  {
                          si+=array7[j];
                  }
				  return sin(si);
             }
};
class calculator8
{
      protected:
                double*array8;
                int total8;
      public:
             virtual double calculate()=0;
             calculator8(double e8[],int u8)
             {
                  total8=u8;
                  array8=new double[u8];
                  for(int j=0;j<u8;j++)
                  {
                          array8[j]=e8[j];
                  }
             }
                  
};
class cosert : public calculator8
{
      private:
      
      public:
             cosert(double e8[],int u8):calculator8(e8,u8){}
             double calculate()
             {
                  double co=array8[0];
                  for(int j=1;j<total8;j++)
                  {
                          co+=array8[j];
                  }
				  return cos(co);
             }
};
class calculator9
{
      protected:
                double*array9;
                int total9;
      public:
             virtual double calculate()=0;
             calculator9(double e9[],int u9)
             {
                  total9=u9;
                  array9=new double[u9];
                  for(int j=0;j<u9;j++)
                  {
                          array9[j]=e9[j];
                  }
             }
                  
};
class tanert : public calculator9
{
      private:
      
      public:
             tanert(double e9[],int u9):calculator9(e9,u9){}
             double calculate()
             {
                  double ta=array9[0];
                  for(int j=1;j<total9;j++)
                  {
                          ta+=array9[j];
                  }
				  return tan(ta);
             }
};
//main()
//{
//      double foraddition[]={1,2,3.3};
//      double formultiplication[]={1.1,3};
//      double forsubtraction[]={1.1,3};
//      double fordivision[]={1.1,3};
//      double forsquareroot[]={9};
//      double forsquare[]={9};
//      double forlogarithm[]={9};
//      double forsine[]={9,10};
//      double forcosine[]={9,10};
//      double fortangent[]={9,10};
//      
//      int k;
//      k=sizeof(foraddition);
//      int u=k/4;
//      int k1;
//      k1=sizeof(formultiplication);
//      int u1=k1/4;
//      int k2;
//      k2=sizeof(forsubtraction);
//      int u2=k2/4;
//      int k3;
//      k3=sizeof(fordivision);
//      int u3=k3/4;
//      int k4;
//      k4=sizeof(forsquareroot);
//      int u4=k4/4;
//      int k5;
//      k5=sizeof(forsquare);
//      int u5=k5/4;
//      int k6;
//      k6=sizeof(forlogarithm);
//      int u6=k6/4;
//      int k7;
//      k7=sizeof(forsine);
//      int u7=k7/4;
//      int k8;
//      k8=sizeof(forcosine);
//      int u8=k8/4;
//      int k9;
//      k9=sizeof(fortangent);
//      int u9=k9/4;
//      
//      
//      addition add(foraddition,u);
//      cout<<endl<<"ADDITION::";
//      add.calculate();
//      multiply mul(formultiplication,u1);
//      cout<<endl<<"MULTIPLICATION::";
//      mul.calculate();
//      subtract sub(forsubtraction,u2);
//      cout<<endl<<"SUBTRACTION::";
//      sub.calculate();
//      divide div(fordivision,u3);
//      cout<<endl<<"DIVISION::";
//      div.calculate();
//      squareroot sq(forsquareroot,u4);
//      cout<<endl<<"SQUARE ROOT::";
//      sq.calculate();
//      square sqr(forsquare,u5);
//      cout<<endl<<"SQUARE ::";
//      sqr.calculate();
//      logarithm lo(forlogarithm,u6);
//      cout<<endl<<"LOGARITHM::";
//      lo.calculate();
//      sinert si(forsine,u7);
//      cout<<endl<<"SINE::";
//      si.calculate();
//      cosert co(forcosine,u8);
//      cout<<endl<<"COSINE::";
//      co.calculate();
//      tanert ta(fortangent,u9);
//      cout<<endl<<"TAN::";
//      ta.calculate();
//      Sleep(40000);
//}
class Basics {
private:
	double v1;
	double v2;
public:
	double add(double val1, double val2) {
		return val1 + val2;
	}
	double subtract(double val1, double val2) {
		return val1 - val2;
	}
	double multiply(double val1, double val2) {
		return val1 * val2;
	}
	double divide(double val1, double val2) {
		return val1 / val2;
	}
	double power(double val1,double val2) {
		return pow(val1,val2);
	}
	double squareRoot(double val) {
		return sqrt(val);
	
	}
	double log(double val) {
	return log10(val);
	}
	double sinAngle(double val) {
		return sin(val);
	}
	double cosAngle(double val) {
		return cos(val);
	}
	double tanAngle(double val) {
		return tan(val);
	}
};
//
//
