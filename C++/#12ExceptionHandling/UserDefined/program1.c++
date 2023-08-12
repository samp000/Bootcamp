
	#include<iostream>


	class Employee {
	
		int id;
		std::string name;
		double sal;

		public:
			Employee(int id,std::string name,double sal) {
			
				this->id = id;
				this->name = name;
				this->sal = sal;
			}

			double getSal() {
				return sal;
			}
			
			std::string  getName() {
				return name;
			}

			void info() {
			
				std::cout << "id: "<< id << std::endl;
				std::cout << "name: "<< name << std::endl;
				std::cout << "salary: "<<sal << std::endl;
			}
			
	};
	
	class BelowSal{
	

		public :
			BelowSal(){
			
			}

		std::string getException() {
			return "Below Salary ";
		}
	};
	
	class AboveSal{
	

		public :
			AboveSal(){
			
			}
		
		std::string getException() {
			return "Above Salary ";
		}
	};

	class Demo {

		public:	
	
			void check(Employee& obj) {

			try{

				if(obj.getSal() < 5.0) {
				
					throw BelowSal();
				
				}else{
				
					throw AboveSal();
				}
			
			}catch(BelowSal e) {
		
				std::cout << "Exception: "<< e.getException() << "name: "<< obj.getName() << std::endl;

			}catch(AboveSal e) {
			
				std::cout << "Exception: "<< e.getException() << "name: "<< obj.getName() << std::endl;		
			}
	
		}
	};

	int main() {
	
		Demo d;

		Employee e1(1,"Sandesh",20.5);
		Employee e2(2,"Ayush",16.5);
		Employee e3(3,"Omkar",4.5);
		Employee e4(4,"Suraj",23.5);
		Employee e5(5,"Sumit",11.5);
		
		Employee obj[] = {e1,e2,e3,e4,e5};

			for(int i=0;i<5;i++) {

				if(obj[i].getSal() < 5.0 || obj[i].getSal() >20.0)
					d.check(obj[i]);
				else
					obj[i].info();

			}

		return 0;
	}
