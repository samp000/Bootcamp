
	//static member function
	#include<iostream>


	class Demo {
	
		int x=10;
		static int y;

		public:
			void disp() {
			
				std::cout<<x <<std::endl;	
				std::cout<<y <<std::endl;	

			}

			static void info() {
			
				//std::cout<<x<<std::endl;	//cannot access instance variable x
				std::cout<<y<<std::endl;

			}
	};

	int Demo::y = 20;

	int main() {
	
		Demo obj;
		obj.disp();
		obj.info();

		Demo::info();		//static function can be called using class name

		return 0;
	}


