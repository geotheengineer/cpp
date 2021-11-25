#include <iostream>
using std::string;

class employee 
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
};

int main()
{
	employee employee1 = employee("S" , "YT" , 25);
	employee1.introduceyourself();
	
	employee employee2 = employee("John" , "Amazon" , 35);
	employee2.introduceyourself();
	
	employee1.setage(39);
	std::cout<<employee1.getname()<< " is "<< employee1.getage() << " years old" << std::endl;
	
	return 0;
}