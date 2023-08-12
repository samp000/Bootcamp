
	#include<iostream>

	class InvalidIndex {
	
		std::string excep;

		public:
			InvalidIndex(std::string excep) {
			
				this->excep = excep;
			}

			std::string getMessage() {
			
				return excep;
			}
	};

	class Demo {
	
		int arr[5] = {10,20,30,40,50};

		public:
			
			int operator[](int index) {
			
				if(index < 0 || index > 5 )
					throw InvalidIndex("Bad Index");

				return arr[index];
			}		
	};

	int main() {
	
		Demo obj;

		try{
		
			std::cout << obj[-1] << std::endl;
		}catch(InvalidIndex e) {
		
			std::cout << "Exception Handled: "<< e.getMessage() << std::endl; 
		}

		return 0;
	}
