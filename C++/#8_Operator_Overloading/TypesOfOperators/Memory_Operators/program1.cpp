
	#include<iostream>

	class Demo {
	
		int x=10;

		public:
			Demo(int x) {
				std::cout<<"In constructor"<<std::endl;
				this->x = x;
			}

			~Demo() {
			
				std::cout<<"In desstructor"<<std::endl;
			}

			void getData() {
				
				std::cout << this->x << std::endl;
			}

			friend void* operator new (size_t size) {
			
				//void *ptr = ::operator new(size);		implicit internal call


				std::cout << "in new" << std::endl;
				void *ptr = malloc(size);
				
				return ptr;
			}

		
			//why we dont get in delete()
			// we cannot override delete() using friend fun cause it is deleting its own object 
			friend void operator delete(void* ptr) {			
				std::cout << "in delete" << std::endl;
				free(ptr);
			}

	};
/*	
	void operator delete(void* ptr) {			
			std::cout << "in delete" << std::endl;
			free(ptr);
	}
*/		


	int main() {

		Demo *obj = new Demo(100);
		obj->getData();

		delete obj;	
		return 0;
	}

	/*
	 * 	Demo *obj = new Demo(100)  ==>  operator new() ==> malloc() returns pointer to memory on heap ==> call to constructor ==> Demo(this,100);
	 *																	   |
	 *	------------------------------------------------------------------------------------------------------------------------------------
	 *	"this" is a address returned from operator new() .
	 */
