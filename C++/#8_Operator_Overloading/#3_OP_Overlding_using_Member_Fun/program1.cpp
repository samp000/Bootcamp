
	#include<iostream>

	class Demo  {
	
		int x;

		public:
			Demo(int x) {
			
				this->x = x;
			}

		int operator+(const Demo& obj2) {
		
			return this->x + obj2.x;

		}
	};

	int main() {
	
		Demo obj1(10),obj2(20);
		std::cout << obj1 + obj2 << std::endl;
		
		/*	above line internally goes like :-->
		 *		obj1.operator+(obj2)
		 *
		 */
		return 0;
	} 
