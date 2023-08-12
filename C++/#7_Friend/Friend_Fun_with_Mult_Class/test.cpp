
	#include<iostream>

	class Demo {
	
		int x=10;
		int y=20;

		void get() const{
			std::cout <<"Hello"; 
		}

		friend void gtInfo(const Demo &obj) ;
	};

	void gtInfo(const Demo &obj) {
	
		obj.get();
	}

	

	int main() {
	
		Demo obj;
		gtInfo(obj);

		return 0;
	}
