
	//	Constant pointer
	
	#include<iostream>

	int main() {
	
		int x = 10,y = 20;

		const int *ptr1 = &x;	//pointer with constant data at specified location
		int const *ptr2 = &x;	//pointer with constant data at specified location
		int * const ptr3 = &x;	//pointer with constant address 

		ptr1 = &y; 
		ptr2 = &y; 
		//ptr3 = &y;		//error
					
		//*ptr1 = 100;		//error
	
		const int *const ptr4 = &x;		//pointer with constant data and constant address

		*ptr4 = 200;		//error
		ptr4 = &y;		//error

		//note: if pointer is with constant data we cannot change data at that location through pointer but can access through that variable itself below is code:

		x = 500;

		std::cout << ptr1 << std::endl;
		std::cout << ptr2 << std::endl;
		std::cout << ptr3 << std::endl;


		return 0;
	}
