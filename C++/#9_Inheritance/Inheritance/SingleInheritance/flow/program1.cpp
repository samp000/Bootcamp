
	#include<iostream>

	class Parent {

		public:

		Parent() {
			std::cout << "Parent constructor" << std::endl;
		}
		
		~Parent() {
			std::cout << "Parent destructor" << std::endl;
		}

	};

	class Child:public Parent {
	
		public:

		Child(){
			std::cout << "Child constructor" << std::endl;
		}
		
		~Child(){
			std::cout << "Child destructor" << std::endl;
		}
	};

	int main() {
	
		Child obj;

		Child *obj1 = new Child();
		delete obj1;

		return 0;
	}
