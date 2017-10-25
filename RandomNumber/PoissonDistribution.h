#pragma once
#include <iostream>
#include "Generator.h"
using namespace std;

class Poisson : public Generator
{

public:
	double n;
	double lambda;
	Generator *iGenerator;
	Poisson(Generator *iGenerator, double lambda, double n);
	double next();
};
