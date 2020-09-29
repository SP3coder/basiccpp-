// In this let's talk about references. They are similar to pointers but are alias.
// Here, it means that if after compiling, where ever these references are used, they are replaced by the var/func/data structure.

//Ref has to be initialised it can't be declared as its not a variable

// Cannot perform swap as its just a reference not a pointer.

#include <iostream>


#define LOG(x) std::cout << "Value is: " << x << std::endl;

void f1(int v1){ // basically pass by value
	 v1++;
}

//pass by reference with ptr & ref

void f2(int* v1){
	(*v1)++;
}

void f3(int& v1){
	v1++;
}

int main(void){
	
/*	
	Ampersand is part of datatype int& not int &.
	int a =5;
	int& ref = a;
	ref = 2;
	LOG(a);
	
	Here after compiling, ref is replaced by a. */
	
// Now we will call a function. First by pointers and then by using reference.
// With references the code is faster and more cleaner.
	
	int a = 2;
	f3(a);
	LOG(a)
	
	
	std::cin.get();	
	return(0);
}
