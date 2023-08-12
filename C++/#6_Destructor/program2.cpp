
	#include<iostream>

	class Demo {
	
		public:
			Demo() {
			
				std::cout << "In constructor\n";
			}

			~Demo() {
			
				std::cout << "In destructor\n";
			}
	};

	int main() {
	
		Demo obj1;
		Demo *obj2 = new Demo();

		std::cout << "End main\n";	
		//object created on heap will not destroy automatically we have to do it manualy by delete
		
		delete obj2;
			
		return 0;
	}
