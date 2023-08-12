

	//difference betn delete and deleteArray

	#include<iostream>

	class Demo {
	
		int *ptrArray = NULL;

		public:
			Demo() {
			
				ptrArray = new int[50];
				std::cout << "In constructor\n";
			}

			~Demo() {
			
				//delete ptrArray; 	this only removes first element in array
				delete[] ptrArray;	//removes whole array
				std::cout << "In destructor\n";
			}
	};

	int main() {
	
		{
			Demo obj1;
		}

		std::cout << "End main\n";
		return 0;
	}
