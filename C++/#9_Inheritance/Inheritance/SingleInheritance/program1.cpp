
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

	class Child : public Parent {
	
		public:
			void getInfo() {
				std::cout << " " << y << " " << z << std::endl; 
			}
	};

	int main() {
	
		Child obj;
	
		obj.getInfo();
		obj.getData();

		return 0;
	}
