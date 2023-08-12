
	#include<iostream>

	class Parent {

		public:

		Parent() {
		
			std::cout << "Parent constructor" << std::endl;
		}

	};

	class Child:public Parent {
	
		public:

		Child(){
		
			std::cout << "Child constructor" << std::endl;
		}
	};

	int main() {
	
		Child obj;

		return 0;
	}
