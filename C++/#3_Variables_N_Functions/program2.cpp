
	//g++ -std=c++98 program2.cpp 		compile with specified version of compiler

	#include<iostream>

	int main() {
	
		int x = 10;
		int y = 20.5f;

		std::cout<< x << std::endl;
		std::cout<< y << std::endl;

		int a{10};
//		int b{20.5f};		error
		
		std::cout<< a << std::endl;
//		std::cout<< b << std::endl;

		return 0;
	}
