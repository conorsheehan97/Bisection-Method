#include "Bisection.h"
#include <iostream>
#include <iomanip>

using namespace std; 

Bisection::Bisection() :
	a{ 0 }, b{ 1 }, tolerance{1e-5} {} //Default Values
Bisection::Bisection(double a, double b, double tolerance)
{
	setBracket(a,b); //Simple safety measure here lads, let's not throw caution to the wind just yet
	setTolerance(tolerance); 
}
Bisection::~Bisection() {};
void Bisection::setBracket(double a, double b)
{
	double temp;
	if (b < a) //Here's our swap
	{
		temp = b;
		a = b;
		b = temp;
	}
	this->a = a;
	this->b = b;
}
void Bisection::setTolerance(double tolerance)
{
	this->tolerance = tolerance;
}
double Bisection::func(double x)
{
	return (sin(x) * sin(x) + (pow(x, 3)) - exp(x)); //This is our default function
}
double Bisection::findRoot()
{
	if (func(a)*func(b) > 0) //This has to hold for Bisection Method
	{
		cout << "No root between 0 and 1 for default function" << endl;
		return 0;
	}
	double l{ a }, r{ b }, m;
	while (r - l > tolerance) //Finally, here is the Bisection method implementation
	{
		m = (l + r) / 2;
		if (func(a)*func(m) > 0)
		{
			l = m;
		}
		else
		{
			r = m;
		}
	}
	return (l + r) / 2;
}
double Bisection::findRoot(double func(double)) //This let's us check a few other functions
{
	if (func(a) * func(b) > 0)
	{
		cout << "No root between 0 and 1 for provided function" << func << endl;
		return 0;
	}
	double l{ a }, r{ b }, m;
	while (r - l > tolerance)
	{
		m = (l + r) / 2;
		if (func(a) * func(m) > 0)
		{
			l = m;
		}
		else
		{
			r = m;
		}
	}
	return (l + r) / 2;
}