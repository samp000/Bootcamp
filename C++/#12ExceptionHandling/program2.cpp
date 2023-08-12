
	#include<iostream> 

	//if we dont handle exception then it will pops current stack untill it finds proper catch
	//at end if it dont finds any catch exception is thrown to OS and OS aborts whole process

	void gun() {
	
		std::cout << "start gun" << std::endl;
		throw -1;
		std::cout << "end gun" << std::endl;
	}

	void fun(){
	
		std::cout << "start fun" << std::endl;
		gun();
		std::cout << "end fun" << std::endl;
	}

	int main() {
	
		std::cout << "start main" << std::endl;
		fun();
		std::cout << "end main" << std::endl;

		return 0;
	}
