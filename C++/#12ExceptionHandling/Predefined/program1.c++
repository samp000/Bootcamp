
	#include<iostream>
	#include<exception>

	int main() {
	
		int size = -1;

		try {		
			int *arr = new int[size];
		
		}catch(const std::exception e){
			
			std::cout << "Exception: " << e.what() << std::endl;	
		}

		return 0;
		
	}
