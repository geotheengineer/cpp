#include <iostream>
using std::string;

class employee 
{
	private:
	    string Height;  
	
    public:
	     string name;
	     string company;
	     int age;
	
	void introduceyourself()
	{
		std::cout << "name - " << name << std::endl;
		std::cout << "Company - " << company << std::endl;
		std::cout << "Age - " << age << std::endl;
		
	}
	// Constructor
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
	/*employee1.name = "Saldina";
	employee1.company = "YT";
	employee1.age = 25;*/
	employee1.introduceyourself();
	
	employee employee2 = employee("John" , "Amazon" , 35);
	/*employee2.name = "John";
	employee2.company = "Amazon";
	employee2.age = 35;*/
	employee2.introduceyourself();
	
	return 0;
}