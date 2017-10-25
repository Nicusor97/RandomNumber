#include "BinomialDistribution.h"
#include <iostream>
using namespace std;

Binomial::Binomial(Generator *iGenerator0, int n0, double p0)
{
	iGenegerator = iGenerator0;
	n = n0;
	p = p0;
}

double Binomial::next()
{
	int x = 0;
	double u;

	if (p > 1)
	{
		cout << "STOP!";
		return;
	}
	
	for (int i = 0; i < n; i++)
	{
		u = iGenegerator->next();
		if (u < p)
		{
			x++;
		}
	}

	return (double) (x / (n - 1));
}