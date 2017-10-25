#define _USE_MATH_DEFINES
#include "Evaluator.h"
#include <cmath>
Evaluator::Evaluator(Generator *iGen, int Number)
{
	iGenerator = iGen;
	all_number = Number;
}

double Evaluator::Evaluate()
{
	int NumberInside = 0;
	double x;
	double y;
	double rez;

	for (int i = 0;i < all_number;i++)
	{
		x = iGenerator->next();
		y = iGenerator->next();

		if ((pow(x, 2) + pow(y, 2)) < 1)
		{
			NumberInside++;
		}
	}
	cout <<"Numarul de puncte in interiorul arcului de cerc este:" <<NumberInside<<endl;

	rez = M_PI - 4 * NumberInside / all_number;

	return (double)rez;
}

