
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
		
		friend void *operator new(size_t size){
			std::cout << "new child " << std::endl;
			return malloc(size);
		}
		
		void operator delete(void *ptr){
			std::cout << "delete child " << std::endl;
			free(ptr);
		}

	};

	int main() {
	
		Child *obj1 = new Child();
		//"Internal"
		//operator new(sizeof(Child))
		//obj1 = ptr;
		//Child(obj1); 
			//constructor parent
			//constructor child

		delete obj1;
		//destructor child
		//destructor parent
		//operator delete(obj1);
		return 0;
	}
