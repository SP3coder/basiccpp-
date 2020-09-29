// A pointer is just a memory address which is a random number.
//It does not have a type so giving int or string pointer does not mean anything. But the convention followed is that the value at the memory location can be of int or string type.
// ANother use case is that for reading/writing at that memory location, we should have those pointers not declared at void.


#include <iostream>
#include<cstring>

#define LOG(x) std::cout << "Value is: " << x << std::endl;

int main(void){
	
	int var = 32;
	void* ptr = &var; 
	LOG(ptr);
	
	char ch = 'S';
	char* p1 = &ch;
	LOG(p1);
	
	int v1 = 8;
	double* p2 = (double*)&v1;
	//double* p2 = &v1;
	LOG(p2);
	
	std::cout << "---------------------" << std::endl;
	
	int var1 = 8;
	int* p3 = &var1;
	LOG(var1);
	*p3 = 10;
	LOG(var1);
	
	std::cout << "---------------------" << std::endl;
	int* buffer = new int[8];
	memset(buffer, 0, 8);
	LOG(buffer);
	delete[] buffer;
	
	std::cout << "---------Now-pointer-to-pointer-2-levels------------" << std::endl;
	int* buffer1 = new int[8];
	memset(buffer1, 0, 8);
	
	int** p4 = &buffer1;
	LOG(p4)
	
	LOG(buffer1);
	delete[] buffer1;
	
	std::cin.get();	
	return(0);
}
