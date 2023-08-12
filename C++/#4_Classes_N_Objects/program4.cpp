
	//Demonstrating adrresses of objects
	
	#include<iostream>

	using namespace std;

	class Demo {
	
		int x=10,y=20;

		public:
			void info() {
			
				std::cout<< this <<std::endl;
				std::cout<< this->x <<std::endl;
				std::cout<< this->y <<std::endl;
			}

	};

	int main() {
	
		Demo obj;
	
//		std::cout<< obj <<std::endl;	//error		
		std::cout<< &obj <<std::endl;

		obj.info();



		return 0;
	}
