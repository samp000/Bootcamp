
	#include<iostream>

	class Demo {
	
	
		public:
			Demo() {
			
				std::cout<<"In  no-arg constructor"<<std::endl;
			}

			Demo(int x) {
			
				std::cout<<"In para constructor" << std::endl;
				std::cout<< x << std::endl;
			
			}

	};


	int main() {


		Demo obj1;
		Demo *obj2 = new Demo();
		Demo obj3(10);
		Demo *obj4 = new Demo(20);

		return 0;
	}
