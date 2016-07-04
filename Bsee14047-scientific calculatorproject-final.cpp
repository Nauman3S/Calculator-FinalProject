#include<windows.h>
#include<time.h>
#include<math.h>
#include<iostream.h>

using namespace std;

class calculator
{
      protected:
                float*array;
                int total;
      public:
             virtual void show()=0;
             calculator(float e[],int u)
             {
                  total=u;
                  array=new float[u];
                  for(int j=0;j<u;j++)
                  {
                          array[j]=e[j];
                  }
             }
                  
};
class addition :public calculator
{
      public:
             addition(float e[],int u):calculator(e,u){}
             void show()
             {
                  float add=array[0];
                  for(int j=1;j<total;j++)
                  {
                          add+=array[j];
                  }
                  cout<<add;
             }
};
class calculator1
{
      protected:
                float*array1;
                int total1;
      public:
             virtual void show()=0;
             calculator1(float e1[],int u1)
             {
                  total1=u1;
                  array1=new float[u1];
                  for(int j=0;j<u1;j++)
                  {
                          array1[j]=e1[j];
                  }
             }
                  
};
class multiply : public calculator1
{
      public:
             multiply(float e1[],int u1):calculator1(e1,u1){}
             void show()
             {
                  float mul=array1[0];
                  for(int j=1;j<total1;j++)
                  {
                          mul*=array1[j];
                  }
                  cout<<mul;
             }
};
class calculator2
{
      protected:
                float*array2;
                int total2;
      public:
             virtual void show()=0;
             calculator2(float e2[],int u2)
             {
                  total2=u2;
                  array2=new float[u2];
                  for(int j=0;j<u2;j++)
                  {
                          array2[j]=e2[j];
                  }
             }
                  
};
class subtract : public calculator2
{
      public:
             subtract(float e2[],int u2):calculator2(e2,u2){}
             void show()
             {
                  float sub=array2[0];
                  for(int j=1;j<total2;j++)
                  {
                          sub-=array2[j];
                  }
                  cout<<sub;
             }
};
class calculator3
{
      protected:
                float*array3;
                int total3;
      public:
             virtual void show()=0;
             calculator3(float e3[],int u3)
             {
                  total3=u3;
                  array3=new float[u3];
                  for(int j=0;j<u3;j++)
                  {
                          array3[j]=e3[j];
                  }
             }
                  
};
class divide : public calculator3
{
      public:
             divide(float e3[],int u3):calculator3(e3,u3){}
             void show()
             {
                  float div=array3[0];
                  for(int j=1;j<total3;j++)
                  {
                          div/=array3[j];
                  }
                  cout<<div;
             }
};
class calculator4
{
      protected:
                float*array4;
                int total4;
      public:
             virtual void show()=0;
             calculator4(float e4[],int u4)
             {
                  total4=u4;
                  array4=new float[u4];
                  for(int j=0;j<u4;j++)
                  {
                          array4[j]=e4[j];
                  }
             }
                  
};
class squareroot : public calculator4
{
      public:
             squareroot(float e4[],int u4):calculator4(e4,u4){}
             void show()
             {
                  float sq=array4[0];
                  for(int j=1;j<total4;j++)
                  {
                          sq+=array4[j];
                  }
                  cout<<sqrt(sq);
             }
};
class calculator5
{
      protected:
                float*array5;
                int total5;
      public:
             virtual void show()=0;
             calculator5(float e5[],int u5)
             {
                  total5=u5;
                  array5=new float[u5];
                  for(int j=0;j<u5;j++)
                  {
                          array5[j]=e5[j];
                  }
             }
                  
};
class square : public calculator5
{
      public:
             square(float e5[],int u5):calculator5(e5,u5){}
             void show()
             {
                  float sqr=array5[0];
                  for(int j=1;j<total5;j++)
                  {
                          sqr+=array5[j];
                  }
                  cout<<sqr*sqr;
             }
};
class calculator6
{
      protected:
                float*array6;
                int total6;
      public:
             virtual void show()=0;
             calculator6(float e6[],int u6)
             {
                  total6=u6;
                  array6=new float[u6];
                  for(int j=0;j<u6;j++)
                  {
                          array6[j]=e6[j];
                  }
             }
                  
};
class logarithm : public calculator6
{
      public:
             logarithm(float e6[],int u6):calculator6(e6,u6){}
             void show()
             {
                  float lo=array6[0];
                  for(int j=1;j<total6;j++)
                  {
                          lo+=array6[j];
                  }
                  cout<<log10(lo);
             }
};
class calculator7
{
      protected:
                float*array7;
                int total7;
      public:
             virtual void show()=0;
             calculator7(float e7[],int u7)
             {
                  total7=u7;
                  array7=new float[u7];
                  for(int j=0;j<u7;j++)
                  {
                          array7[j]=e7[j];
                  }
             }
                  
};
class sinert : public calculator7
{
      public:
             sinert(float e7[],int u7):calculator7(e7,u7){}
             void show()
             {
                  float si=array7[0];
                  for(int j=1;j<total7;j++)
                  {
                          si+=array7[j];
                  }
                  cout<<sin(si);
             }
};
class calculator8
{
      protected:
                float*array8;
                int total8;
      public:
             virtual void show()=0;
             calculator8(float e8[],int u8)
             {
                  total8=u8;
                  array8=new float[u8];
                  for(int j=0;j<u8;j++)
                  {
                          array8[j]=e8[j];
                  }
             }
                  
};
class cosert : public calculator8
{
      public:
             cosert(float e8[],int u8):calculator8(e8,u8){}
             void show()
             {
                  float co=array8[0];
                  for(int j=1;j<total8;j++)
                  {
                          co+=array8[j];
                  }
                  cout<<cos(co);
             }
};
class calculator9
{
      protected:
                float*array9;
                int total9;
      public:
             virtual void show()=0;
             calculator9(float e9[],int u9)
             {
                  total9=u9;
                  array9=new float[u9];
                  for(int j=0;j<u9;j++)
                  {
                          array9[j]=e9[j];
                  }
             }
                  
};
class tanert : public calculator9
{
      public:
             tanert(float e9[],int u9):calculator9(e9,u9){}
             void show()
             {
                  float ta=array9[0];
                  for(int j=1;j<total9;j++)
                  {
                          ta+=array9[j];
                  }
                  cout<<tan(ta);
             }
};
main()
{
      float foraddition[]={1,2,3.3};
      float formultiplication[]={1.1,3};
      float forsubtraction[]={1.1,3};
      float fordivision[]={1.1,3};
      float forsquareroot[]={9};
      float forsquare[]={9};
      float forlogarithm[]={9};
      float forsine[]={9,10};
      float forcosine[]={9,10};
      float fortangent[]={9,10};
      
      int k;
      k=sizeof(foraddition);
      int u=k/4;
      int k1;
      k1=sizeof(formultiplication);
      int u1=k1/4;
      int k2;
      k2=sizeof(forsubtraction);
      int u2=k2/4;
      int k3;
      k3=sizeof(fordivision);
      int u3=k3/4;
      int k4;
      k4=sizeof(forsquareroot);
      int u4=k4/4;
      int k5;
      k5=sizeof(forsquare);
      int u5=k5/4;
      int k6;
      k6=sizeof(forlogarithm);
      int u6=k6/4;
      int k7;
      k7=sizeof(forsine);
      int u7=k7/4;
      int k8;
      k8=sizeof(forcosine);
      int u8=k8/4;
      int k9;
      k9=sizeof(fortangent);
      int u9=k9/4;
      
      
      addition add(foraddition,u);
      cout<<endl<<"ADDITION::";
      add.show();
      multiply mul(formultiplication,u1);
      cout<<endl<<"MULTIPLICATION::";
      mul.show();
      subtract sub(forsubtraction,u2);
      cout<<endl<<"SUBTRACTION::";
      sub.show();
      divide div(fordivision,u3);
      cout<<endl<<"DIVISION::";
      div.show();
      squareroot sq(forsquareroot,u4);
      cout<<endl<<"SQUARE ROOT::";
      sq.show();
      square sqr(forsquare,u5);
      cout<<endl<<"SQUARE ::";
      sqr.show();
      logarithm lo(forlogarithm,u6);
      cout<<endl<<"LOGARITHM::";
      lo.show();
      sinert si(forsine,u7);
      cout<<endl<<"SINE::";
      si.show();
      cosert co(forcosine,u8);
      cout<<endl<<"COSINE::";
      co.show();
      tanert ta(fortangent,u9);
      cout<<endl<<"TAN::";
      ta.show();
      Sleep(40000);
}


