#pragma once

class Generator
{
public:
	int seed;
	virtual double next()=0;
};
