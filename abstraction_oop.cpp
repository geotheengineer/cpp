#include <iostream>
using std::string;

class AbstractEmployee
{
	virtual void AskForPromotion() = 0;
	
};

class employee:AbstractEmployee
{
	private: 
	     string name;
	     string company;
	     int age; 
	
    public:
         void setname(string Name) // setter 
		 {
			 name = Name;
		 }
		 string getname() // getter 
		 {
			 return name;
		 }
		 void setcompany(string Company) 
		 {
			 company = Company;
		 }
		 string getcompany() 
		 {
			 return company;
		 }
		 void setage(int Age) 
		 {
			 if(Age>=18)
			 age = Age;
		 }
		 int getage() 
		 {
			 return age;
		 }
	     void introduceyourself()
	     {
		     std::cout << "name - " << name << std::endl;
		     std::cout << "Company - " << company << std::endl;
		     std::cout << "Age - " << age << std::endl;
	     }
		 employee(string Name, string Company, int Age) 
         {
	         name = Name;
		     company = Company;
		     age = Age;
		 }
		 void AskForPromotion()
		 {
			if(age>30)
				 std::cout << name << " got promoted!" << std::endl;
			 else
				 std::cout << name << " sorry no promotion for you!" << std::endl;
		 }
};

int main()
{
	employee employee1 = employee("S" , "YT" , 25);
	employee employee2 = employee("John" , "Amazon" , 35);
	
	employee1.AskForPromotion();
	employee2.AskForPromotion();

	return 0;
}