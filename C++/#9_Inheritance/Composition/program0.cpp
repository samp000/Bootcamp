
	#include<iostream>

	class Employee {
	
		std::string eName;
		int empId ;

		public:
	       
		Employee(std::string eName="",int empId=0) {
			std::cout << "IN employee constructor" << std::endl;
			this->empId = empId;
			this->eName = eName;

		}

		void getInfo(){
		
			std::cout << eName << " "<< empId << std::endl;
		}

		void setName(std::string name) {
		
			this->eName = name;
		}

		void setId(int id) {
		
			this->empId = id;
		}
		
		~Employee() {
			std::cout << "IN employee destructor" << std::endl;
	
		}
	};

	class Company {
	
		std::string cName = "veritas";
		int strEmp = 1000;

		Employee obj;

		public:

			Company(std::string cName,int strEmp,std::string eName,int empId){
			
				std::cout << "IN company constructor" << std::endl;
				this->cName = cName;
				this->strEmp = strEmp;

				this->obj.setName(eName);
				this->obj.setId(empId);
			}

			void getInfo() {

				std::cout << cName << " "<< strEmp << std::endl;
				this->obj.getInfo();		//callong to employees function()
			}
		
			~Company() {
				std::cout << "IN company destructor" << std::endl;
			}
	};

	int main() {
	
		Company obj("pubmatic",5000,"Sandesh",333);
		obj.getInfo();

		return 0;
	}
