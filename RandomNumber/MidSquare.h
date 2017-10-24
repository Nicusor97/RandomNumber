#pragma once
#include "Generator.h"
class MidSquare : public Generator
{
public: 
	int lengthSeed;
	int n, m;
	MidSquare(int seed0);
	double next();
};
