
	#include<iostream>

	int main() {
	
		int x = 10;
		int &y = x;
		int *ptr = &x;

		std::cout << x << std::endl;
		std::cout << y << std::endl;
		std::cout << ptr << std::endl;
		
		std::cout << &x << std::endl;
		std::cout << &y << std::endl;
		std::cout << &ptr << std::endl;

		return 0;
	}
