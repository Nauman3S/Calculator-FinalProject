#include <string>
#include<iostream>
#include "BasicFunctionality.h"

#pragma once

bool opSel = false;

float Valop1 = 0.0;
float Valop2 = 0.0;

System::String^ process(System::String^ expression) {
	Basics bs;

	using namespace System;
	
	Console::WriteLine("adasd");
	String^ delimStr = "+-/x";
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
	if (expression->Contains("x")) {
		cal = bs.multiply(Convert::ToDouble(words[0]), Convert::ToDouble(words[1]));
		calulationRes = Convert::ToString(cal);
		return calulationRes;
	}
	else if (expression->Contains("/")) {
		cal = bs.divide(Convert::ToDouble(words[0]), Convert::ToDouble(words[1]));
		calulationRes = Convert::ToString(cal);
		return calulationRes;
	}
	
	
	
	//gg = words[0]->ToInt32 + words[1]->ToInt32
}
