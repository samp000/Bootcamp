
	#include<iostream>

	class Employee {
	
		double sal;

		public:
			Employee(double sal) {
			
				this->sal = sal;
			}

			template<typename T>
			T& max(T& a, T& b) {
			
				if(a > b)
					return a;
				return b;
			}

			friend bool operator> (Employee obj1,Employee obj2) {
			
				return (obj1.sal > obj2.sal);
			}

			friend std::ostream& operator<< (std::ostream& out , Employee& obj) {
			
				out << obj.sal;
				return out;
			}
	};

	int main() {
	
		
		Employee sandy(1000.5);
		Employee ayush(2000.5);

		std::cout << sandy.max(sandy,ayush) << std::endl;	
	
		
	}
