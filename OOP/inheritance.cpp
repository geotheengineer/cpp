#include <iostream>
using std::string;

class AbstractEmployee
{
	virtual void AskForPromotion() = 0;
	
};

class employee:AbstractEmployee
{
	private:
	    string company;
	    int age; 
	
	protected:
        string name;
	
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

class developer:public employee
{
	public:
	    string favprogramminglanguage;
		developer(string Name, string Company, int Age, string Favprogramminglanguage)

	        :employee(Name, Company, Age)
		{
			favprogramminglanguage = Favprogramminglanguage;
		}
        void fixbug()
		{
			std::cout << name <<" fixed bug using " <<  favprogramminglanguage << std::endl;
		}

};

class teacher:public employee
{
	public:
	    string subject;
	    void preparelesson()
	    {
		    std::cout<<name<<" is preparing "<< subject << " lesson" << std::endl;
	    }
		teacher(string Name, string Company, int Age, string Subject)
		    :employee(Name, Company, Age)
		{
			subject = Subject;
		}
};

int main()
{
	developer d = developer("Geo", "NG", 28, "Python");
	d.fixbug();
	d.AskForPromotion();

	teacher t = teacher("Jack", "CCNY", 35, "History");
	t.preparelesson();
	t.AskForPromotion();

	return 0;
}