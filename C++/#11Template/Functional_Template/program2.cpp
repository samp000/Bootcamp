
	#include<iostream>


/*	
	T min(T x, T y){
	
		return (x < y) ? x : y;
	}	
*/
	template<typename T>
	T min(T x, T y);

	template<>
	int min<int>(int x,int y) {

		std::cout << "Template function\n";
		return (x < y) ? x : y;
	}

	int min(int x, int y) {
	
		std::cout << "Non-template function\n";
		return (x < y) ? x : y;
	}

	int main() {
	
		std::cout<< min(10,20) << std::endl;			
		std::cout<< min<int>(10,20) << std::endl;		//imternally call to template function
		return 0;
	}
	
