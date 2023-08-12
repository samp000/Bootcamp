
	#include<iostream>
	
	int main() {
	
		std::cout << "start main" << std::endl;
		
		try {
		
			throw 'A';
		
		}catch(int x) {		//for a specific throw specific catch is required
		
			std::cout << "Exception Handling" << std::endl;
		}

		std::cout << "start main" << std::endl;
	
		return 0;
	}
