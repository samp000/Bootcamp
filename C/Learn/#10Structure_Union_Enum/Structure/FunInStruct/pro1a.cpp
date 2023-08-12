
	#include<iostream>
	using namespace std;

	class Demo {

		public:	
			int a=10;
		
		void fun();
	};

	void Demo::fun() {
	
		cout<<"Hello"<<endl;
	}

	int main() {
	

		Demo d ;

		cout<<d.a<<endl;
		d.fun();
		return 0;
	}
