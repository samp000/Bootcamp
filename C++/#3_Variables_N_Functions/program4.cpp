		
		//reference variables
		

	#include<iostream>

	int main() {
	
		int x = 10;
		int &y = x;
	
		std::cout << x << std::endl;
		std::cout << y << std::endl;
		std::cout << &x << std::endl;
		std::cout << &y << std::endl;

		return 0;
	}
