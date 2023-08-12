
	#include<iostream>

	class Parent {
	
		int x = 10;
		
		protected:
			int z = 30;

		public:
			int y = 20;

			Parent() {
			
				std::cout << "Parent constructor" << std::endl;
			}

			void getData() {
			
				std::cout << x << " " << y << " " << z << std::endl;
			}

	};

	class Child: Parent {
	
		public:
			Child() {
			
				std::cout << "Child constructor" << std::endl;
			}

			void getInfo() {
			
				std::cout <<" " << y << " " << " " << z << std::endl;
			}
	};

	class GChild : Child{
	
		public:
			GChild() {
				std::cout << "G Child constructor" << std::endl;
			}

			void getD() {
				getInfo();
				std::cout <<" " << y << " " << " " << z << std::endl;
			}
	};

	int main() {
	
		GChild c;
		c.getD();
	}
