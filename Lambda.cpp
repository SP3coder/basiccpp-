//Lambda Functions: C++ 11 concept: Write "un-named" functions in place
// Here we will see the use of lambda instead of struct objects

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
	vector<int> v1{1,2,3,4,5,6};
	int increment;
	cin >> increment;
	for_each(v1.begin(), v1.end(), [increment](const int& x){cout << x+ increment << endl;});
	
	std::cin.get();	
	return(0);
}
