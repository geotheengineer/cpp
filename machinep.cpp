#include <iostream>

int main()
{
  
    double ep = 1.0;
    while (ep + 1.0 != 1.0)
    {
        ep = ep /2.0;
    }
  
    ep = ep*2.0;
    std::cout<<std::endl<<"The epsilon machine is "<<ep<<std::endl<<std::endl;

    return 0;
}
