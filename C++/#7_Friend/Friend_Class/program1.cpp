
	#include<iostream>

	class One {
	
		int x=10;

		protected:
			int y=20;

		public:
			One() {
			
				std::cout << "In constructor One" << std::endl;
			}

			friend class Two;
	};

	class Two {
		
		public:
			Two() {
			
				std::cout<< "In constructor Two" << std::endl;
			}	

		private:
			void getData(const One& ref) {
			
				std::cout << ref.x << std::endl;
				std::cout << ref.y << std::endl;
			}		

		public:
			void accessData(const One& ref) {
			
				std::cout << ref.x << std::endl;
				std::cout << ref.y << std::endl;
			
				getData(ref);
			}		
	};

	int main(){

		One obj1;
		Two obj2;

		obj2.accessData(obj1);

		return 0;
	}
