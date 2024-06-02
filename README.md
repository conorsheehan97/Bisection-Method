# Bisection-Method
This repository contains an object-oriented implementation of the Bisection Method in C++. The project is structured to facilitate the understanding and application of the Bisection Method for finding roots of functions.

## Contents
### C++ Files:
 - Bisection.h: Class declaration.
 - Bisection.cpp: Method implementation file.
 - Test_File.cpp: Test file to demonstrate the functionality.

### Graphs: 
 - Generated using the Gnuplot application.

### PDF Document: 
Bisection_Method.pdf provides a brief mathematical introduction to the Bisection Method.

## Project Overview
### Bisection Method
The Bisection Method is a root-finding method that repeatedly divides an interval in half and selects the subinterval in which the root lies. This process is continued until the root is found to the desired tolerance.

## Implementation Details
### Bisection Objects:
#### Attributes:
 - Interval limits.
 - Tolerance.
#### Methods:
 - findRoot: Overloaded to check a default function (shown in Graph_1) and to check user-provided double type functions.

## Graphs
The project includes three graphs generated using Gnuplot:
 - Graph_1: Default function.
 - Graph_2: User-provided function.
 - Graph_3: User-provided function.
   
These graphs illustrate the functions checked on their associated intervals and demonstrate the accuracy of the Bisection Method in finding roots.

## Dependencies
 - C++ Compiler: Any standard C++ compiler (e.g., g++).
 - Gnuplot: For generating and visualizing graphs.

## Conclusion
This project provides an object-oriented implementation of the Bisection Method in C++, demonstrating its application in finding roots of functions accurately. The accompanying graphs and PDF document offer additional insights into the method and its mathematical foundation.


