
	#include<iostream>

	class Parent {
	
		public :
			virtual void getData() {
				
				std::cout << "Parent" << std::endl;
			}
	};

	class Child : public Parent {
	
		public:

		void getData() {
		
			std::cout << "Child" << std::endl;
		}
	};

	int main() {
	
		Parent *p = new Parent();
		Child c;
		
		p->getData();
		c.getData();
		
		p = &c;
		
		p->getData();
		c.getData();


		return 0;
	}
