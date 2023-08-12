
	//overloading ">>" operator

	#include<iostream>

	class Demo {
	
		int x;

		public:

		
			friend std::istream& operator >> (std::istream& cin,Demo& obj) {
			
				cin >> obj.x ;
				return cin;
			}


			void setData(int x) {

				this->x = x;
			}

			void getData() {
			
				std::cout << this->x << std::endl;
			}

			
	};

/*this is commented cause gives ambiguity

	std::istream& operator >>(std::istream& in , Demo& obj) {
	
		int tmp;
		in >> tmp;

		obj.setData(tmp);

		return in;
	}
*/
	int main() {
	
		Demo obj;

		std::cout << "Enter value:";
		std::cin >> obj;

		obj.getData();

		return 0;
	}
