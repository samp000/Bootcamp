
	#include<iostream>

	template<typename T>
	
	T min(T x, T y){
	
		return (x < y) ? x : y;
	}	

	int main() {
	
		std::cout<< min('A','B') << std::endl;
		std::cout<< min(10,20) << std::endl;
		std::cout<< min(50.3f,20.1f) << std::endl;
		std::cout<< min(100.5,20.5) << std::endl;

		return 0;
	}
	
