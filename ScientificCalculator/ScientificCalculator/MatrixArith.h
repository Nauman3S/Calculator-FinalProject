#pragma once
ref class MatrixCalculator {
public:
	void getMatrix(array<System::String^, 2>^ mat1, array<System::String^, 2>^ mat2);
	System::String^ Add();

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
			res[i,j] = matrix1[i, j] + matrix2[i, j];
			StrRes = StrRes + res[i, j]+",";
			
		}
		//StrRes = StrRes + "]";
	}
	StrRes = StrRes + "}";

	return StrRes;
}