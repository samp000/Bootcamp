
	#include<iostream>

	void fun(int x,int y) {
	
		std::cout << "int-int" << std::endl;
	} 

	void fun(int &ref1,int &ref2) {
	
		std::cout<<" &int-&int " << std::endl;
	}
	

	int main() {

		int x=10,y=20;
		fun(x,y);

		return 0;
	}
