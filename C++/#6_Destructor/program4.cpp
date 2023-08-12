
	#include<iostream>

	class Demo {

		public:

		Demo() {
		
			std::cout<<"In no-arg constructor"<<std::endl;
			
		}

		Demo(int x) {
		
			std::cout<<"In arg constructor"<<std::endl;
			
		}

		Demo(Demo &obj){
		
			std::cout<<"In copy constructor"<<std::endl;
		}

		~Demo() {

			std::cout<<"In destructor"<<std::endl;
		}

	};

	int main() {
	
		Demo obj;
		Demo obj1 = obj;

		return 0;
	}
