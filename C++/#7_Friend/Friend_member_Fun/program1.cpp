
	#include<iostream>

	class One;

	class Two {
	
		public:
			Two() {
			
				std::cout << "constructor Two" << std::endl;
			}

			void accessData(const One& ref);
	};

	class One {
	
		int x=10;

		protected:
			int y=20;

		public:
			One() {
			
				std::cout << "Constructed One" << std::endl;
			}

			friend  void Two::accessData(const One& ref);
	};


	void Two::accessData(const One& ref) {
	
		std::cout<< ref.x << std::endl;
		std::cout<< ref.y << std::endl;
	}

	int main() {
	
		One obj1;
		Two obj2;

		obj2.accessData(obj1);

		return 0;
	}
