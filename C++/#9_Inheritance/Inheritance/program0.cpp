
	#include<iostream>

	class Parent {
	
		int x = 10;

		protected:
			int y=20;

		public:
			int z=30;

	};

	int main() {
	
		Parent p;

		std::cout << p.y << std::endl;
		std::cout << p.z << std::endl;

	
		return 0;
	}
