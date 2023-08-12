
	//internally class template

	#include<iostream>

	template<typename T> 
	class Template {
	
		T data;
	
		public:
		Template() {
		
			std::cout<< "In constructor" << std::endl;
		}

		void tmp(T x);
		void prn(T x);
	};

	template<typename T>
	void Template<T>::tmp(T x) {
	
		std::cout << x << std::endl;
	}

	template<typename T>
	void Template<T>::prn(T x ) {
	
		tmp(x);
	}

	//specific template(compiler writes it..)
	
	template<>
	class Template<int> {
	
		int data;

		public:
		Template() {
		
			std::cout << "In int constructor" << std::endl;
		}
	};

	int main() {
	
		Template<int> obj1;
		Template<double> *obj2 = new Template<double>();
		Template<double> obj3;


		std::cout << sizeof(obj1) << std::endl;
		std::cout << sizeof(obj2) << std::endl;

		Template<std::string> obj;
		obj.prn("Hello");
	}
