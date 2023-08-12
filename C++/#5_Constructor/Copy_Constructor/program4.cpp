
	#include<iostream>

	class Demo {
	
		int x=10,y=20;

		public:

			Demo() {
			
				std::cout<<"NO- Para" << std::endl;

			}

			Demo(int x,int y) {

				this->x = x;
				this->y = y;

				std::cout<<"In Para" << std::endl;
				std::cout<<x << " "<< y << std::endl;
			}

			Demo(Demo &obj) {
			
				std::cout<<"In Copy" << std::endl;
			}

			void access() {
			
				std::cout << x <<" "<< y <<std::endl;		

			}
/*
			Demo& info(Demo &obj) {
			
				obj.x = 700;
				obj.y = 800;

				return obj;
			}
*/

			Demo info(Demo obj) {
			
				obj.x = 700;
				obj.y = 800;

				return obj;
	
			}
	};

	int main() {
	
		Demo obj1;
		obj1.access();	//10 20

		Demo obj2(100,200);	//100 200
		obj2.access();		//100 200

		Demo obj3 = obj2.info(obj1);

		/*	in copy
		 *	
		 *	in copy
		 *
		 */

		obj3.access();		//10 20

		return 0;
	}
