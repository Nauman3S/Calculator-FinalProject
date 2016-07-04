#pragma once
ref class MatrixCalculator {
public:
	void getMatrix(array<System::String^, 2>^ mat1, array<System::String^, 2>^ mat2);
	System::String^ Add();
	System::String^ Subtract();
	System::String^ Multiply();
private:
	array<System::String^, 2>^ matrix1;
	array<System::String^, 2>^ matrix2;
	array<System::String^, 2>^ res;
	

};

void MatrixCalculator::getMatrix(array<System::String^, 2>^ mat1, array<System::String^, 2>^ mat2) {
	using namespace System;
	//mat1->GetLength();
	
	matrix1 = gcnew array<String^, 2>(mat1->Rank,mat1->GetLength(0));
	matrix2 = gcnew array<String^, 2>(mat2->Rank, mat2->GetLength(0));
	
	matrix1 = mat1;
	matrix2 = mat2;
	res = gcnew array<String^, 2>(mat2->Rank, mat2->GetLength(0));
}
System::String^ MatrixCalculator::Add() {
	using namespace System;
	
	String^ StrRes;
	StrRes = "{";
	for (int i = 0; i < matrix1->GetLength(0); i++) {
		//StrRes = StrRes + "[";
		for (int j = 0; j <matrix1->GetLength(0); j++) {
			res[i,j] =Convert::ToString(Convert::ToDouble( matrix1[i, j]) + Convert::ToDouble( matrix2[i, j]));
			StrRes = StrRes + res[i, j]+",";
	
		}
		//StrRes = StrRes + "]";
	}
	StrRes = StrRes + "}";

	return StrRes;
}

System::String^ MatrixCalculator::Subtract() {
	using namespace System;

	String^ StrRes;
	StrRes = "{";
	for (int i = 0; i < matrix1->GetLength(0); i++) {
		//StrRes = StrRes + "[";
		for (int j = 0; j <matrix1->GetLength(0); j++) {
			res[i, j] = Convert::ToString(Convert::ToDouble(matrix1[i, j]) - Convert::ToDouble(matrix2[i, j]));
			StrRes = StrRes + res[i, j] + ",";

		}
		//StrRes = StrRes + "]";
	}
	StrRes = StrRes + "}";

	return StrRes;
}

System::String^ MatrixCalculator::Multiply() {
	using namespace System;

	String^ StrRes;
	StrRes = "{";

	/*matrix m3;
	m3.row = m3.col = row;

	for (int i = 0; i<row; i++)
	{
		for (int j = 0; j<col; j++)
		{
			m3.mat[i][j] = 0;
			for (int k = 0; k<m2.row; k++)
				m3.mat[i][j] += mat[i][k] * m2.mat[k][j];*/
	
	for (int i = 0; i < matrix1->GetLength(0); i++) {
		//StrRes = StrRes + "[";
		for (int j = 0; j <matrix1->GetLength(0); j++) {
			res[i, j] = "0";
			for (int k = 0; k < matrix1->GetLength(0); k++) {
				res[i, j] = Convert::ToString(Convert::ToDouble(res[i, j]) + (Convert::ToDouble(matrix1[i, k])*Convert::ToDouble(matrix2[k, j])));
			}
			//res[i, j] = Convert::ToString(Convert::ToDouble(matrix1[i, j]) - Convert::ToDouble(matrix2[i, j]));
			StrRes = StrRes + res[i, j] + ",";

		}
		//StrRes = StrRes + "]";
	}
	StrRes = StrRes + "}";

	return StrRes;
}
