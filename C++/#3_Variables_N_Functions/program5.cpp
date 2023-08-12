		
		//reference variables
		

	#include<iostream>

	int main() {
	
		int x = 10;
		int &y;		//error
	
		std::cout << x << std::endl;
		std::cout << y << std::endl;
		std::cout << &x << std::endl;
		std::cout << &y << std::endl;

		return 0;
	}
