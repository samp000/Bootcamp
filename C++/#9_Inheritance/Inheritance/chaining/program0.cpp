
	#include<iostream>

	class Parent {
	
		int x;

		public :
			Parent(int x) {
			
				this->x = x;
			}

			void getData() {
				
				std::cout << x << std::endl;
			}
	};

	class Child : public Parent {
	
		int y;

		public:
			Child(int x,int y):Parent(x) {
			
				this->y = y;
			}

		void getInfo() {
		
			std::cout << y << std::endl;
		}
	};

	int main() {
	
		Child c(10,20);
		c.getData();
		c.getInfo();

		return 0;
	}
