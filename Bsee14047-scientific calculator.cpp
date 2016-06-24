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
      private:
      
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
      private:
      
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
      private:
      
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
      private:
      
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
      private:
      
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

main()
{
      float foraddition[]={1,2,3.3};
      float formultiplication[]={1.1,3};
      float forsubtraction[]={1.1,3};
      float fordivision[]={1.1,3};
      float forsquareroot[]={9};
      
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
      Sleep(4000);
}


