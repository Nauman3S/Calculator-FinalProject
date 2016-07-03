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
	
	Console::WriteLine("adasd");
	if (expr->Contains("Mean(")) {
		expr = expr->Remove(0, 5);

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
		Mean m(vals);
	
		return Convert::ToString(m.Calculate());
		
	}
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

