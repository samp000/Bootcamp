
	#include<iostream>

	void fun(int * val) {
	
		val = 30;
	}

	int main() {
	
		int x = 10;

		std::cout << x << std::endl; 
		
		fun(x);

		std::cout << x << std::endl; 

		return 0;
	}
