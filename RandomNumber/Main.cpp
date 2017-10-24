#include "LCG.h"
#include "MidSquare.h"
#include "Evaluator.h"
#include <iostream>
#include <fstream>
using namespace std; 

int main()
{
	ofstream outfile; 
	outfile.open("input.txt");
	outfile << "LCG"<<endl;
	LCG r = LCG(19,22,4,63);

	for (int i = 0; i < 20; i++)
	{
		outfile << r.next()<< endl; 
	}

	outfile << "Midle Square "<< endl;
	MidSquare g = MidSquare(1258);
	for(int i = 0; i < 20; i++) 
	{
		outfile << g.next() << endl; 
	}

	outfile << "Evaluarea erori numerelor care se afla in interiorul arcului de cerc ";
	Generator* gen = new  MidSquare(1258);
	Evaluator objEvalator = Evaluator(gen, 35);
	outfile << objEvalator.Evaluate();

	outfile.close();

}
