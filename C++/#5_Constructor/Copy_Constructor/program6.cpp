
	//making constant object

	#include<iostream>

	class Demo {
	
		public:
			int x = 10;

			Demo() {
			
				this->x = 20;
				std::cout << "In constructor \n";
			}

			/*const*/ void getData() const {
			
				std::cout <<  x << std::endl;
				
				this->x = 100;		//	error caus inside const fun() "this" is also constant

			}
	};

	int main() {
	
		const Demo obj;

		std::cout << obj.x << std::endl;

		obj.getData();

		//obj.x=50;
		//obj.getData();


		return 0;
	}
