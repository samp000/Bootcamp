
	//Creating array of objects

	#include<iostream>

	class Demo {
	
		public:

			Demo() {
				std::cout<<"NO- Para" << std::endl;
			}

			Demo(int x) {
				std::cout<<"In Para" << std::endl;
			}

			Demo(Demo &obj) {	
				std::cout<<"In Copy" << std::endl;
			}

	};

	int main() {
	
		Demo obj1,obj2,obj3;

		Demo arr[] = {obj1,obj2,obj3};
		/*
		 * 	This calls to copy constructor
		 *
		 * 	Demo arr[0] = obj1
		 *
		 */

		return 0;
	}
