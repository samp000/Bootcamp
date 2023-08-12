

	//if you mension or not copy constructor is present by default

	#include<iostream>

	class Demo {
	
	
		public:
			Demo() {
				std::cout<<"In  no-arg constructor"<<std::endl;
			}

			Demo(int x) {
				std::cout<<"In para constructor" << std::endl;	
			}
			
			Demo(Demo &obj) {
				std::cout<<"In copy constructor"<<std::endl;
			}

	};


	int main() {


		Demo obj1;

		Demo obj2(10);

		Demo obj3(obj2);		//call to copy constructor

		Demo obj4 = obj1;		//call to copy constructor

		return 0;
	}
