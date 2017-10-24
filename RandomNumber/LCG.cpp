#include "LCG.h"
#include "BST.h"
#include <iostream>
using namespace std; 

LCG::LCG(int seed0, int a0, int c0, int m0)
{
	seed = seed0;
	a = a0;
	c = c0;
	m = m0;
}
double LCG::next()
{
	BST t;
	int next_seed;
	

	if (c == 0)
	{
		next_seed = seed / m;
		if (next_seed != seed)
		{
			t.insert(next_seed, t.root);
			if (t.find(next_seed) == true)
			{
				next_seed = next_seed + 1;
			}
			seed = next_seed;
		}
		else
		{
			next_seed = next_seed + 1;
			t.insert(next_seed, t.root);
			seed = next_seed;
		}
	}

	else
	{
		next_seed = (a * seed + c) % m;
		t.insert(next_seed, t.root);
		if (next_seed != seed)
		{
			t.insert(next_seed, t.root);
			if (t.find(next_seed) == true)
			{
				next_seed++;
			}
			seed = next_seed;

		}
		else {

			next_seed = next_seed + 1;				
			t.insert(next_seed, t.root);
			seed = next_seed;
		}
	}

	return (double)seed / m;
}