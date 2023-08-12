
	#include<iostream>

	class Demo {
	
		int x=10,y=20;

		public:

			Demo() {
			
				std::cout<<"NO- Para" << std::endl;

			}

			Demo(int x=10,int y=20) {

				this->x = x;
				this->y = y;

				std::cout<<"In Para" << std::endl;
				std::cout<<x << " "<< y << std::endl;
			}
	};

	int main() {
	
//		Demo obj1;		//error
		Demo obj2(100,200);

		return 0;
	}
