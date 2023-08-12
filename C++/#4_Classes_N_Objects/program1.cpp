
	//Structure in cpp
	
	#include<iostream>

	struct Player {
	
		int jerNo = 18;
		char name[20] = "Virat Kohli";

		void disp() {
		
			std::cout << jerNo << std::endl;
			std::cout << name << std::endl;
		}

	};

	

	int main() {
	
		Player obj;
		obj.disp();


		return 0;
	}
