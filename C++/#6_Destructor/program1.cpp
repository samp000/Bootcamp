
	#include<iostream>

	class Demo {
	
		public:
			int x=10;

			Demo(){
			
				std::cout << "In constructor \n";
				std::cout << x << std::endl;
			}

			Demo(int x) {
			
				this->x = x;
				std::cout << "In para\n";
				std::cout << x << std::endl;

				Demo();//this line creates temporary constructor, proof is destructor
			}

			~Demo() {
			
				std::cout << "Destructor\n";
			}
	};

	int main() {
	
		Demo obj(50);
		std::cout << "End main\n";
		return 0;
	}
