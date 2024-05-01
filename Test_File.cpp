#include "Bisection.h"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double my_func(double x)
{
	return sin(x);
}

double my_func2(double x)
{
	return x * x * x - sin(x);
}

int main()
{
	Bisection b(0, 3, 1E-5); //Instantiating with [0,3] interval, and tolerance 0.00001
	double root = b.findRoot(); //Firstly checking the default function
	cout << fixed << setprecision(10);
	cout << "The root for the default function sin^2(x) + x^3 - exp(x) is : " << root << endl;
	b.setTolerance(1E-10);
	root = b.findRoot(); 
	cout << "\nThe root value is now :" << root << endl; //With our new tolerances
	//Trying again, with two new functions
	b.setBracket(3, 4);
	root = b.findRoot(my_func);
	cout << "\nThe root for sin(x) in the range [3,4] is : " << root << endl;
	b.setBracket(0.5, 1.5);
	root = b.findRoot(my_func2);
	cout << "\nThe root for x^3 - sin(x) in range [0.5,1.5] is : " << root << endl;
	system("PAUSE"); 

	return EXIT_SUCCESS;
}