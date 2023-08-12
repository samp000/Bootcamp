
	#include<iostream>

	inline int sum(int x,int y) {
		return x+y;
	}


	 int sub(int x,int y) {
		return x-y;
	}

	int main() {
	
		std::cout << sum(10,20) << std::endl;
		std::cout << sub(10,20) << std::endl;
		return 0;	
	}
