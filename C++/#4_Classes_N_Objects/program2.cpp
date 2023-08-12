
	#include<iostream>

	class Player {
	
		int jerNo = 18;
		char name[20] = "Virat Kohli";

		public:
			
			void disp() {
			
				std::cout << jerNo << std::endl;
				std::cout << name << std::endl;
			}

			void fun();

	};

	void Player::fun() {
		
		std::cout << " Don't give it... If you can't take it back" << std::endl;	
	}

	int main() {
	

		Player obj;
		obj.disp();
		obj.fun();

		return 0;
	}
