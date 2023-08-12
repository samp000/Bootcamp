
	//				....................variable shadowing..................
	
	#include<iostream>

//	int x = 100;

	//global variables are outside of any function(Global scope)

	int main() {
	
		int x = 10;

		std::cout << x << std::endl;

		{
			int x = 20;
			
			std::cout << x << std::endl;
			std::cout << ::x << std::endl;		//error if there is not global x variable
			
			x = 30;
			std::cout << x << std::endl;
		}

		std::cout << x << std::endl;

		return 0;
	}
