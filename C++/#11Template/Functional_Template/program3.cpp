
	//template with different datatype

	#include<iostream>

	template<typename T,typename U>

	//autpo return data without 	
	auto min(T x, U y){
	
	/*
		if(x < y)		error
			return x;
		else
			return y;
	*/
		return (x < y) ? x : y;
	}	

	int main() {
	
		std::cout<< min(100,20.5) << std::endl;

		return 0;
	}
	
