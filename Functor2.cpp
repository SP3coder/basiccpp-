//Lambda Functions: C++ 11 concept: Write "un-named" functions in place
// Function Object: Objects that behave as a functions
//Let's understand the value of 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//#define LOG(x) std::cout << "Value is: " << x  << std::endl;

struct AddPrint{
	AddPrint(int increment): m_increment(increment) {}
	
	void operator() (const int& x) { cout << x + m_increment << endl;}

	int m_increment;
};

int main(void){
	vector<int> v1{1,2,3,4,5,6};
	int increment;
	cin >> increment;
	AddPrint print(increment);
	for_each(v1.begin(), v1.end(), print);
	// for_each(v1.begin(), v1.end(), AddPrint(increment));
	
	std::cin.get();	
	return(0);
}
