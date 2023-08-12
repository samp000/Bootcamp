
	//Name mangling
	
	#include<iostream>

	void fun(int a,int b) {
		std::cout <<"int-int "<< a << b << std::endl;
	}
	
	void fun(int a,float b) {
		std::cout <<"int-int "<< a << b << std::endl;
	}

	void fun(float a,float b) {
		std::cout <<"int-int "<< a << b << std::endl;
	}

	int main() {
	
		fun(10,20);
		fun(10.5f,20.5f);
		//fun(10.5f,20);

		return 0;
	}
