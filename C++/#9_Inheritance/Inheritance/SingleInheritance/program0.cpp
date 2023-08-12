
	#include<iostream>

	class Parent {
	
		int x = 10;

		protected:
			int y=20;

		public:
			int z=30;

			void getData() {
			
				std::cout << x << " " << y << " " << z << std::endl; 
			}
	};

	class Child :Parent {
	
		public:
			void getInfo() {
				std::cout << " " << y << " " << z << std::endl; 
			}
	};

	int main() {
	
		Child obj;
	
		obj.getInfo();
//		obj.getData();		error:cause inheritance is of type private so getData() becoms private	

		return 0;
	}
