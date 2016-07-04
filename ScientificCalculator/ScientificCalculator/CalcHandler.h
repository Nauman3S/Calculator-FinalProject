#include <string>
#include<iostream>
#include "BasicFunctionality.h"
#include"Trignometry.h"
#include "StatFunctions.h"
#pragma once

bool opSel = false;

float Valop1 = 0.0;
float Valop2 = 0.0;

System::String^ processStat(System::String^ expression) {
	////Stat processor
	array<double>^ vals;
	Basics bs;
	using namespace System;
	String  ^expr;
	expr = expression;
	int type=0;
	Console::WriteLine("adasd");
	if (expr->Contains("Mean(")) {
		expr = expr->Remove(0, 5);
		type = 1;
	}
	else if (expr->Contains("Mode("))
	{
		expr = expr->Remove(0, 5);
		type = 2;
	}
	else if (expr->Contains("Median("))
	{
		expr = expr->Remove(0, 7);
		type = 3;
	}
	else if (expr->Contains("Variance("))
	{
		expr = expr->Remove(0, 9);
		type = 4;
	}
	else if (expr->Contains("StdDev("))
	{
		expr = expr->Remove(0, 7);
		type = 5;
	}
	//return expr;
		String^ delimStr = ",";
		Console::WriteLine("delimiter : '{0}'", delimStr);
		array<Char>^ delimiter = delimStr->ToCharArray();
		array<String^>^ words;
		words = expr->Split(delimiter);
		vals = gcnew array<double>(words->Length);

		for (int i = 0; i < words->Length; i++) {
			vals[i] = Convert::ToDouble(words[i]);

		}
		if (type == 1) {


			Mean m(vals);

			return Convert::ToString(m.Calculate());
		}
		else if (type == 2) {
			Mode mm(vals);
			return Convert::ToString(mm.Calculate());
		}
		else if (type == 3) {
			Median med(vals);
			return Convert::ToString(med.Calculate());
		}
		else if (type == 4) {
			Variance v(vals);
			return Convert::ToString(v.Calculate());
		}
		else if (type == 5) {
			Standard_Deviation stdev(vals);
			return Convert::ToString(stdev.Calculate());
		}
}


System::String^ processMatrix(System::String^ expression) {


	Basics bs;
	using namespace System;
	String  ^expr;
	array<String^>^junk;
	int col = 0;
	array<String^, 2>^ matrix1;
	array<String^, 2>^ matrix2;
	expr = expression;
	//TrignometryHandler th;
	Console::WriteLine("adasd");
	array<String^>^ fullExpSplitted;
	if (expr->Contains("+")) {
		//expr = expr->Remove(0, 6);

		//return expr;
		String^ delimStrB = "+";
		//Console::WriteLine("delimiter : '{0}'", delimStr);
		array<Char>^ delimiterB = delimStrB->ToCharArray();

		fullExpSplitted = expr->Split(delimiterB);

		//return fullExpSplitted[1];

	}
	if (fullExpSplitted[0]->Contains("MatrixAData(")) {
		fullExpSplitted[0] = fullExpSplitted[0]->Remove(0, 12);

		//return expr;
		String^ delimStr = ";";
		String^ delim2 = "[]";
		String^ delim3 = ",";
		Console::WriteLine("delimiter : '{0}'", delimStr);
		array<Char>^ delimiter = delimStr->ToCharArray();
		array<String^>^ words;
		words = fullExpSplitted[0]->Split(delimiter);
		for (int i = 0; i < words->Length; i++) {
			words[i] = words[i]->Replace("[", "");
			words[i] = words[i]->Replace("]", "");
			//words[i] = words[i]->Remove(words[i]->Length-1);
		}
		junk = words[0]->Split(delim3->ToCharArray());
		col = junk->Length;
		matrix1 = gcnew array<String^, 2>(words->Length, col);
		for (int r = 0; r < words->Length; r++) {
			for (int c = 0; c < col; c++) {
				junk = words[r]->Split(delim3->ToCharArray());
				matrix1[r, c] = junk[c];
			}
		}
		//	return Convert::ToString(matrix1[1,1]);
	}
	//Matrix B
	if (fullExpSplitted[1]->Contains("MatrixBData(")) {
		fullExpSplitted[1] = fullExpSplitted[1]->Remove(0, 12);

		//return expr;
		String^ delimStr00 = ";";
		String^ delim200 = "[]";
		String^ delim300 = ",";
		Console::WriteLine("delimiter : '{0}'", delimStr00);
		array<Char>^ delimiter00 = delimStr00->ToCharArray();
		array<String^>^ words00;
		words00 = fullExpSplitted[1]->Split(delimiter00);
		for (int i = 0; i < words00->Length; i++) {
			words00[i] = words00[i]->Replace("[", "");
			words00[i] = words00[i]->Replace("]", "");
			//words[i] = words[i]->Remove(words[i]->Length-1);
		}
		junk = words00[0]->Split(delim300->ToCharArray());
		col = junk->Length;
		matrix2 = gcnew array<String^, 2>(words00->Length, col);
		for (int r = 0; r < words00->Length; r++) {
			for (int c = 0; c < col; c++) {
				junk = words00[r]->Split(delim300->ToCharArray());
				matrix2[r, c] = junk[c];
			}
		}
	}
	return Convert::ToString(matrix2[0,1]);
}
System::String^ process(System::String^ expression, double uLim, double lLim, double offset) {
	////Integration processor
	Basics bs;
	using namespace System;
	String  ^expr;
	expr = expression;
	TrignometryHandler th;
	Console::WriteLine("adasd");
	if (expr->Contains("Integ(")) {
		expr = expr->Remove(0,6);

		//return expr;
		String^ delimStr = ",";
		Console::WriteLine("delimiter : '{0}'", delimStr);
		array<Char>^ delimiter = delimStr->ToCharArray();
		array<String^>^ words;
		words = expr->Split(delimiter);
		return th.integrate(words, uLim, lLim, offset);
	}
}
System::String^ process(System::String^ expression,double offset,double x) {
	///derivative Processor
	Basics bs;
	using namespace System;
	String  ^expr;
	expr = expression;
	TrignometryHandler th;
	Console::WriteLine("adasd");
	if (expr->Contains("d(")) {
		expr = expr->Remove(0, 2);
		
		//return expr;
		String^ delimStr = ",";
		Console::WriteLine("delimiter : '{0}'", delimStr);
		array<Char>^ delimiter = delimStr->ToCharArray();
		array<String^>^ words;
		words = expr->Split(delimiter);
		return th.derivate(words, offset, x);
	}

}
System::String^ process(System::String^ expression) {
	
	Basics bs;
	using namespace System;
	
	Console::WriteLine("adasd");
	String^ delimStr = "(+-/X^";
	Console::WriteLine("delimiter : '{0}'", delimStr);
	array<Char>^ delimiter = delimStr->ToCharArray();
	array<String^>^ words;
	//String^ line = "one\ttwo three:four,five six seven";

	//Console::WriteLine("text : '{0}'", line);
	words = expression->Split(delimiter);
		//Console::WriteLine("Number of Words : {0}", words->Length);
	for (int word = 0; word < words->Length; word++) {
		
	}

	String ^calulationRes;///storing calculation result as a string
	double cal; //storing calculation result in double
	
	if (expression->Contains("+")) {
		


		cal = bs.add(Convert::ToDouble(words[0]), Convert::ToDouble(words[1]));
		calulationRes = Convert::ToString(cal);
		return calulationRes;
	}
	if (expression->Contains("-")) {
		cal = bs.subtract(Convert::ToDouble(words[0]), Convert::ToDouble(words[1]));
		calulationRes = Convert::ToString(cal);
		return calulationRes;
	}
	if (expression->Contains("X")) {
		cal = bs.multiply(Convert::ToDouble(words[0]), Convert::ToDouble(words[1]));
		calulationRes = Convert::ToString(cal);
		return calulationRes;
	}
	else if (expression->Contains("/")) {
		cal = bs.divide(Convert::ToDouble(words[0]), Convert::ToDouble(words[1]));
		calulationRes = Convert::ToString(cal);
		return calulationRes;
	}
	else if (expression->Contains("^")) {
		cal = bs.power(Convert::ToDouble(words[0]), Convert::ToDouble(words[1]));
		calulationRes = Convert::ToString(cal);
		return calulationRes;
	}
	else if (expression->Contains("sin(")) {
		cal = bs.sinAngle(Convert::ToDouble(words[1]));
		calulationRes = Convert::ToString(cal);
		return calulationRes;
	}
	else if (expression->Contains("cos(")) {
		cal = bs.cosAngle(Convert::ToDouble(words[1]));
		calulationRes = Convert::ToString(cal);
		return calulationRes;
	}
	else if (expression->Contains("tan(")) {
		cal = bs.tanAngle(Convert::ToDouble(words[1]));
		calulationRes = Convert::ToString(cal);
		return calulationRes;
	}
	else if (expression->Contains("inv(")) {
		cal = bs.inverse(Convert::ToDouble(words[1]));
		calulationRes = Convert::ToString(cal);
		return calulationRes;
	}
	else if (expression->Contains("mod(")) {
		cal = bs.mod(Convert::ToDouble(words[1]));
		calulationRes = Convert::ToString(cal);
		return calulationRes;
	}
	else if (expression->Contains("exp(")) {
		cal = bs.expo(Convert::ToDouble(words[1]));
		calulationRes = Convert::ToString(cal);
		return calulationRes;
	}
	else if (expression->Contains("sqr(")) {
		cal = bs.squareRoot(Convert::ToDouble(words[1]));
		calulationRes = Convert::ToString(cal);
		return calulationRes;
	}
	//gg = words[0]->ToInt32 + words[1]->ToInt32
}

