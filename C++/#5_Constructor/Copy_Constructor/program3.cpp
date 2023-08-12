
	#include<iostream>

	class Demo {
	
		int x=10,y=20;

		public:

			Demo() {
			
				std::cout<<"NO- Para" << std::endl;

			}

			Demo(int x,int y) {

				this->x = x;
				this->y = y;

				std::cout<<"In Para" << std::endl;
				std::cout<<x << " "<< y << std::endl;
			}

			Demo(Demo &obj) {
			
				std::cout<<"In Copy" << std::endl;
			}

			void info(Demo obj) {
			
				std::cout << x <<" "<< y <<std::endl;		//100 200
				std::cout << obj.x <<" "<< obj.y <<std::endl;	//10 20
		
				std::cout << &obj << std::endl;
			}
	};

	int main() {
	
		Demo obj1;		
		Demo obj2(100,200);

		obj2.info(obj1);

		std::cout << &obj1 << std::endl;
		return 0;
	}
