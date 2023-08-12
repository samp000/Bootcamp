
	#include<iostream>

	class Demo {
	
		int x;

		public: 
			Demo(int x) {

				this->x = x;
			}

			//operator overloading
			friend std::ostream& operator<<(std::ostream& cout,Demo& obj) {
			
				cout << obj.x ;

				return cout;
			}
			int getData() {
			
				return this->x;
			}

			
	/*		 
			   operator overloading for "<<" operator using member function wont work

			std::ostream& operator<<(std::ostream& cout) {
			
				cout << this->x;
				return cout;
			}
	*/		
	};

/*
 * 	this is commented cause gives ambiguity
	std::ostream operator<<(std::ostream& cout , Demo& obj) {
	
		cout << obj.getData();
		return cout;
	}
*/

	int main() {
	
		Demo obj(100);

		std::cout << obj << std::endl;

		return 0;
	}
