
	#include<iostream>

	class Demo {
	
		int x=10,y=20;

		public:
			Demo() {
			
				std::cout << "No -arg constructor" << std::endl;
			}

			Demo(int x,int y) {
			
				this->x = x;
				this->y = y;
				std::cout << "In-para constructor" << std::endl;

			}

			Demo(Demo &obj) {

				std::cout << "In-copy constructor" << std::endl;
			}
	};

	int main() {
	
		Demo obj1;
		Demo obj2(100,200);
		Demo obj3 = obj1;

		Demo obj4;
		obj4 = obj1;
	}
