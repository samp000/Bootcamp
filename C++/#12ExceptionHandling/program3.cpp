
	//Dynamic specification
	
	#include<iostream>

	//this function is allowed to throw only int and double exception
	void fun(int x) throw (int,double) {

		if(x == 1)
			throw -1;
		else if(x == 2)
			throw 10.5;
		else if(x == 3)
			throw 'A';
	}

	int main() {
	
		int x;
		std::cout << "Enter value:";
		std::cin >> x;

		try{
		
			fun(x);
		}catch(int){
			std::cout << "int" << std::endl;
		}catch(double) {
			std::cout << "double" << std::endl;
		}catch(char) {
			std::cout << "char" << std::endl;
		}

		return 0;
	}
