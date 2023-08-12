
	#include<iostream>

	class Two;

	class One {
	
		int x=10;

		protected:
			int y=20;

		public:
			One() {
			
				std::cout << "In constructor One" << std::endl;
			}

			void getData() const {
			
				std::cout << "x= " << x << std::endl;
				std::cout << "y= " << y << std::endl;
			}

			friend void accessData(const One& ref1,const Two& ref2);
	};

	class Two {
	
		int a=50;

		protected:
			int b=100;
		
		public:
			Two() {
			
				std::cout<< "In constructor Two" << std::endl;
			}
		
		private:
			void getData() const {
			
				std::cout << "a= " << a << std::endl;
				std::cout << "b= " << b << std::endl;
			}

		
			friend void accessData(const One& ref1, const Two& ref2);
	};

	void accessData(const One& ref1, const Two& ref2) {
	
		ref1.getData();		//private data member
		ref2.getData();		//private data member
	}

	int main(){

		One obj1;
		Two obj2;

		accessData(obj1,obj2);

		return 0;
	}
