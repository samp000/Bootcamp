
	#include<iostream>

	class Demo {
	
		int x;

		public: 
			Demo(int x) {

				this->x = x;
			}

			//operator overloading
			friend std::ostream& operator<<(std::ostream& cout,Demo& obj) {
			
				std::cout << obj.x << std::endl;

				return cout;
			}
	};

	int main() {
	
		Demo obj(100);

		std::cout << obj << std::endl;

		return 0;
	}
