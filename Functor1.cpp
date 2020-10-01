//Lambda Functions: C++ 11 concept: Write "un-named" functions in place
// Function Object: Objects that behave as a functions

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//#define LOG(x) std::cout << "Value is: " << x  << std::endl;

void print(int x){cout << "using normal functions" << endl;}

struct A
{
	void print(int x){cout <<"using print member function: "<< x+ 1 <<endl;}
	void operator() (int x){cout <<"using operator member function: "<< x+ 1 <<endl;}
};

int main(void){
	
	//calling a normal function
	print(1);
	
	//Declare the object
	A a;
	a.print(2);
	a.operator()(3);
	
	//use object as a function.
	a(4);
			
	std::cin.get();	
	return(0);
}
