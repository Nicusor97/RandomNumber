#include "PoissonDistribution.h"
#define _USE_MATH_DEFINES
#include <cmath>
Poisson::Poisson(Generator *iGenerator0, double lambda0, double n0)
{
	iGenerator = iGenerator0;
	lambda = lambda0;
	n = n0;
}

double Poisson::next()
{

	double L;
	int k = 0;
	double p = 1;
	double u;
	double E = 2.71828;
	double u;

	L = (double)pow(E, (-1)*lambda);

	do
	{
		k = k + 1;
		u = iGenerator->next();
		p = p * u;

		
	} while (p > L && k <n);

	return (double)(k-1)/(n-1);
}