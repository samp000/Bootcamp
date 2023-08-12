
	//static variable
	
	#include<iostream>

	class Demo{
	
		public:
			int x=10;
			static int y;
			void fun();
	};

	int Demo::y = 20;

	void Demo::fun() {
	
		std::cout << "x= " << x << std::endl;
		std::cout << "y= " << y << std::endl;

	}

	int main() {

		Demo obj1,obj2;
		obj1.fun();
		obj2.fun();

		obj1.x=50;
		obj2.y=100;

		obj1.fun();
		obj2.fun();

		return 0;
	}
