
	#include<iostream>

	class Demo {
	
		int x=100;
		int y=200;

		public:
			Demo(int x) {
			
				this->x = x;
			}

			int getData() const {
				return x;
			}
	};

	int operator+(const Demo& obj1,const Demo& obj2) {
	
		return obj1.getData() + obj2.getData();
	}

	int main() {
	
		Demo obj1(10),obj2(20);

		Demo obj3  = 10;
		Demo obj4  = (Demo) 20;

		std::cout << obj3.getData() << std::endl;
		std::cout << obj4.getData() << std::endl;

		std::cout << obj1 + obj2 << std::endl;
		std::cout << obj1 + 10 << std::endl;

		return 0;
	}
