//#include"BasicFunctionality.h"
#pragma once

ref class TrignometryHandler {
public:
	System::String^ derivate(array<System::String^>^co, int offset, int x);
	System::String^ integrate(array<System::String^>^co, int uLim, int lLim,double offset);
private:
	array<double>^ coef;///coefficients list
	array<double>^der;///derivatives list
	array<double>^integ;///integrated list
	Basics bHandler;

};

System::String^ TrignometryHandler::derivate(array<System::String^>^co, int offset, int x) {
	using namespace System;
	double calculatedDer=0.0;
	coef = gcnew array<double>(co->Length);
	der = gcnew array<double>(co->Length);
	for (int i = 0; i < co->Length; i++) {
		coef[i] = Convert::ToDouble(co[i]);

	}
	for (int y = 0; y < coef->Length; y++) {
		der[y] = bHandler.multiply( coef[y] ,bHandler.power(x,(coef[y]-1)));
	}
	for (int k = 0;k< der->Length; k++) {
		calculatedDer += der[k];
	}
	return Convert::ToString(calculatedDer+offset);
}

System::String^ TrignometryHandler::integrate(array<System::String^>^co, int uLim, int lLim,double offset) {
	using namespace System;
	double calculatedInteg = 0.0;
	coef = gcnew array<double>(co->Length);
	integ = gcnew array<double>(co->Length);
	for (int i = 0; i < co->Length; i++) {
		coef[i] = Convert::ToDouble(co[i]);

	}
	for (int y = 0; y < coef->Length; y++) {
		integ[y] = (bHandler.divide(bHandler.power(uLim, coef[y] + 1), coef[y] + 1)) - (bHandler.divide(bHandler.power(lLim, coef[y] + 1), coef[y] + 1));
	
	}
	for (int k = 0; k< integ->Length; k++) {
		calculatedInteg += integ[k];
	}
	return Convert::ToString(calculatedInteg+offset);
}