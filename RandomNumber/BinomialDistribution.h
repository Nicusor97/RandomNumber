#pragma once
#include "Generator.h"
class Binomial : public  Generator
{
public:
	int n;
	double p;
	Generator *iGenegerator;
	Binomial(Generator *iGenegerator, int n, double p);
	double next();
};