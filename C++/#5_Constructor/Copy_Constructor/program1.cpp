
	#include<iostream>

	class Demo {
	

		public:

			int x=10;

			Demo() {	
				
				std::cout << "No para" << std::endl;
			}

			Demo(int x) {

				Demo obj1;
				Demo obj3(obj1);
				std::cout << "In para" << std::endl;
			}

			Demo(Demo &obj) {
				std::cout << "In copy" << std::endl;

			}



	};

	int main() {

		Demo obj1(10);				
		Demo obj3 = obj1;

		std::cout << obj1.x << " " << obj3.x << std::endl;

		obj3.x = 50;
		
		std::cout << obj1.x << " " << obj3.x << std::endl;

		return 0;
	}
