#pragma once
#include "Generator.h"
class LCG : public Generator
{
private:
	int a;
	int c;
	int m;
public:
	LCG(int seed0, int a0, int c0, int m0);
	double next();
};
	