
	#include<iostream>

	class Demo {
	
		int x=10;

		protected:
			int y=20;

		public:
			Demo() {
			
				std::cout << "Constructor" << std::endl;
			}

			void getData() {
			
				std::cout << "x= " << x << std::endl;
				std::cout << "y= " << y << std::endl;
			}

			//friend function can modify private variables so restrict it make passed reference as constant	
			friend void accessData(const Demo& ref);
	};

	void accessData(const Demo& ref) {

		/*

		error:

		int tmp = ref.x;
		ref.x = ref.y;
		ref.y = tmp;
	
		*/
		
		std::cout << "x= " << ref.x << std::endl;
		std::cout << "y= " << ref.y << std::endl;
	}


	int main() {
	
		Demo obj;
		obj.getData();
		accessData(obj);
		obj.getData();

		return 0;
	}
