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
main()
{
      float foraddition[]={1,2,3.3};
      float formultiplication[]={1.1,3};
      
      int k;
      k=sizeof(foraddition);
      int u=k/4;
      int k1;
      k1=sizeof(formultiplication);
      int u1=k1/4;
      
      addition add(foraddition,u);
      cout<<endl<<"ADDITION::";
      add.show();
      multiply mul(formultiplication,u1);
      cout<<endl<<"MULTIPLICATION::";
      mul.show();
      Sleep(4000);
}


