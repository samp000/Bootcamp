
	#include<iostream>

	class Parent {
	
		int x = 10;

		protected:
			int y=20;

		public:
			int z=30;

			Parent() {
			
				std::cout << "in parent no-arg" << std::endl;
			}

			Parent(int x,int y,int z) {
			
				std::cout << "in parent arg" << std::endl;
				
				this->x = x;
				this->y = y;
				this->z = z;
			}

			Parent(Parent &obj) {
			
				std::cout << "parent copy constructor"<<std::endl;
			}

			void getData() {
			
				std::cout << x << " " << y << " " << z << std::endl; 
			}
	};

	class Child : public Parent {
	
		public:

			Child(int x,int y,int z) {
			
				std::cout<<"Before call"<<std::endl;

				Parent(x,y,z);
				
				std::cout<<"After call"<<std::endl;
			}

			void getInfo() {
			
				getData();
			}
	};

	int main() {
	
		Child obj(40,50,60);
	
		obj.getInfo();

		return 0;
	}
