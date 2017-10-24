#pragma once
#include "Generator.h"
#include <iostream>
using namespace std;

class Evaluator 
{
public:
	Generator *iGenerator;
	int all_number;
	Evaluator(Generator *iGenerator, int all_number);
	double Evaluate();
};
