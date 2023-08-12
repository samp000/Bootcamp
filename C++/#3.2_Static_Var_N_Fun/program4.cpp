
	#include<iostream>

	class Demo {
	
		int x=10;
		static int y;		//glocal static

		public:
			void fun() {
			
				int a=10;
				static int b=20;	//local static
				
				std::cout<<x << " "<<y <<std::endl;	
				std::cout<<a << " "<<b <<std::endl;	

			}

			static void gun() {
			
				int a=10;
				static int b=10;	//local static
				
				//std::cout<<x <<std::endl;	//error
				std::cout<<y <<std::endl;	
				std::cout<<a << " "<<b <<std::endl;	

			}
	};

	int Demo::y=20; 

	int main(){
	
		Demo obj1;
		Demo *obj2 = new Demo();

		obj1.fun();
		obj1.gun();

		
		obj2->fun();
		obj2->gun();

		return 0;
	}
