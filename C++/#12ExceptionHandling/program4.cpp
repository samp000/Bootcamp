
	//rethrowing exception

	#include<iostream>

	int eleSearch(int arr[],int size,int key) {
	
		for(int i=0;i<size;i++) {
		
			if(arr[i] == key)
				return i;
		}
		try {
		
			throw "Element no found";
		
		}catch(const char* str) {
		
			std::cout << str << std::endl;
			throw;					//rethrowing
		}
	}

	int main() {

		int arr[] = {10,20,30,40};

		try {
		
			eleSearch(arr,4,15);
		
		}catch(const char* str) {
		
			std::cout << "Catch in main: "<< str <<std::endl;
		} 

		return 0;
	}
