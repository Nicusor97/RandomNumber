#include "MidSquare.h"
#include <iostream>
#include "Math.h"
#include "BST.h"

using namespace std;

MidSquare::MidSquare(int seed0)
{	
	int lengthSeed1 = 0;
	seed = seed0 ;
	while (seed0 != 0)
	{
		lengthSeed1 = lengthSeed1 + 1;
		seed0 = seed0 / 10;
	}
	lengthSeed = lengthSeed1;
	cout << lengthSeed;
	n = pow(10, (lengthSeed / 2));
	m = pow(10, lengthSeed);
	
}

double MidSquare::next()
{	
	int next_seed; 
	int seed_per_square;
	BST t;

	seed_per_square = seed * seed;
	
	next_seed = seed_per_square / n % m;
	if (next_seed != seed)
	{
		t.insert(next_seed, t.root);
		if (t.find(next_seed) == true)
		{
			next_seed++;
		}

	}
	else
	{	
			next_seed++;
	}

	if (next_seed < pow(10,(lengthSeed -1)))
	{
		next_seed = next_seed + 1000; 
	}

	seed = next_seed;

	return (double)seed / pow(10, lengthSeed);

}