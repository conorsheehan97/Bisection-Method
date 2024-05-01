#pragma once
class Bisection
{
private:
	double func(double x); // Default Function 
	double a, b, tolerance; 
public:
	//Constructor and Destructors, No-Arg Constructor uses Default Function 
	Bisection();
	Bisection(double a, double b, double tolerance);
	~Bisection();
	void setBracket(double a, double b);  // Method to swap a,b if they're supplied in reverse
	void setTolerance(double tolerance);  // Setting object Attribute to supplied tolerance
	double findRoot(); // Overloaded Fucntion, where the function can either be supplied, or use default
	double findRoot(double func(double));
};

