	
	#include<iostream>

	template<typename T> 
	class Template {
	
		T data;
	
		public:
		Template() {
		
			std::cout<< "In constructor" << std::endl;
		}
	};

	int main() {
	
		Template<int> obj1;
		Template<double> *obj2 = new Template<double>();
		Template<double> obj3;


		std::cout << sizeof(obj1) << std::endl;
		std::cout << sizeof(obj2) << std::endl;
	}
