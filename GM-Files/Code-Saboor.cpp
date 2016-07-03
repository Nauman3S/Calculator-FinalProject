 #include<iostream>  
 #include<stdlib.h>  
 #define MAX 10  
 using namespace std;  
   
 class matrix  
 {  
     
   public:  
   int row,col,mat[MAX][MAX];
     matrix()  
     {  
       row=col=0;  
       for(int i=0;i<MAX;i++)  
         for(int j=0;j<MAX;j++)  
         mat[i][j]=0;  
     }  
   
     ~matrix()  
     {  
      delete mat;  
     }  
   
     friend istream& operator >>(istream& din,matrix& m);
	 void getData(matrix &m,int size,int matin [2][2]);
	 void printData(matrix &m);  
     friend ostream& operator <<(ostream& dout,matrix& m);  
   
     matrix operator +(matrix m2);  
     matrix operator -(matrix m2);  
     matrix operator *(matrix m2);  
     int operator !=(matrix m2);  
   
 };  
   
   
  istream& operator >>(istream& din,matrix& m)  
 {  
     cout<<"Enter the size\n";  
     din>>m.row>>m.col;  
   
     cout<<"Enter the elements\n";  
     for(int i=0;i<m.row;i++)  
      for(int j=0;j<m.col;j++)  
      din>>m.mat[i][j];  
   
     return din;  
 }  
   void getData(matrix &m,int size,int matin [2][2]){
   	m.row=size;
   	m.col=size;
   	 for(int i=0;i<m.row;i++)  
      for(int j=0;j<m.col;j++)  
      matin[i][j]=m.mat[i][j];
   
   }
   
 void printData(matrix &m){
 	for(int i=0;i<m.row;i++)  
    {  
      for(int j=0;j<m.col;j++)  
      {  
        std::cout<<m.mat[i][j]<<"\t";  
      }  
    std::cout<<endl;  
    }
 }
 ostream& operator <<(ostream& dout,matrix& m)  
 {  
    for(int i=0;i<m.row;i++)  
    {  
      for(int j=0;j<m.col;j++)  
      {  
        dout<<m.mat[i][j]<<"\t";  
      }  
    dout<<endl;  
    }  
    return dout;  
 }  
   
   
   
 matrix matrix :: operator +(matrix m2)  
 {  
  matrix m3;  
  m3.row=m3.col=row;  
   
  for(int i=0;i<row;i++)  
   for(int j=0;j<col;j++)  
   m3.mat[i][j]=mat[i][j]+m2.mat[i][j];  
   return m3;  
 }  
   
   
 matrix matrix :: operator -(matrix m2)  
 {  
  matrix m3;  
  m3.row=m3.col=row;  
   
  for(int i=0;i<row;i++)  
   for(int j=0;j<col;j++)  
   m3.mat[i][j]=mat[i][j]-m2.mat[i][j];  
   return m3;  
 }  
   
   
 matrix matrix :: operator *(matrix m2)  
 {  
  matrix m3;  
  m3.row=m3.col=row;  
   
  for(int i=0;i<row;i++)  
  {  
   for(int j=0;j<col;j++)  
   {  
   m3.mat[i][j]=0;  
   for(int k=0;k<m2.row;k++)  
   m3.mat[i][j]+=mat[i][k]*m2.mat[k][j];  
   }  
  }  
   return m3;  
 }  
   
   
 int matrix ::operator !=(matrix m2)  
 {  
   if(row!=m2.row && col!=m2.col)  
   return 1;  
   else  
   return 0;  
 }  
   
 int main()  
 {  
 int matt[2][2];
 int matt2[2][2];
 for (int i=0;i<2;i++){
 	for (int j=0;j<2;j++){
 		matt[i][j]=i+j+3;
	 	matt2[i][j]=i*j;
	 }
 }
    matrix m1,m2,m3;  
    cout<<"TuhinBagh.blogspot.com\n\n";   
    getData(m1,2,matt);
	printData(m1);
	//repeat:  
    cout<<"Matrix 1\n" ;  
    //cin>>m1;  
   
    cout<<"\nMatrix 2\n";  
    //cin>>m2;  
   getData(m2,2,matt2);
    if(m1!=m2)  
    {  
    cout<<"Matrix size needs to be equal\nTry Again\n";  
    //goto repeat;  
     }  
    int ch=0;  
    std::cout<<"\n====Menu====\n";  
    std::cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n";  
    std::cin>>ch;  

    switch(ch)  
    {  
      case 1:  
      cout<<"\nAddition\n";  
      m3=m1+m2;  
      printData(m3);
      //cout<<m3<<endl;  
      break;  
   
      case 2:  
      cout<<"\nSubtraction\n";  
      m3=m1-m2;  
      cout<<m3<<endl;  
      break;  
   
      case 3:  
      cout<<"\nMultiplication\n";  
      m3=m1*m2;  
      cout<<m3<<endl;  
      break;  
   
      default: cout<<"Invalid choice\n";  
    }  
    system("PAUSE");  
    return 0;  
 }  
