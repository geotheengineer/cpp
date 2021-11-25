#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{   
    double x , y , z;
    double a1 , a2 , a3 , b1 , b2 , b3 , c1 , c2 , c3 , d1 , d2 , d3;
    double t , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9;
    std::cout<<"this is a three equations, three unknowns equation solver."<<std::endl;
    std::cout<<std::endl<<"please enter the values in the following form for each equation"<<std::endl<<std::endl;
    std::cout<<" a1x+b1y+c1z=d1 cin>> a1 , b1 , c1 , d1"<<std::endl<<std::endl;
    std::cout<<" a2x+b2y+c2z=d2 cin>> a2 , b2 , c2 , d2"<<std::endl<<std::endl;
    std::cout<<" a3x+b3y+c3z=d3 cin>> a3 , b3 , c3 , d3"<<std::endl;

    std::cin>>a1>>a2>>a3>>d1>>b1>>b2>>b3>>d2>>c1>>c2>>c3>>d3;

    t=(a1*b2*c3)-(a1*b3*c2)+(a2*b3*c1)-(a2*b1*c3)+(a3*b1*c2)-(a3*b2*c1);

    T1=(b2*c3)-(b3*c2);
    T2=(b3*c1)-(b1*c3);
    T3=(b1*c2)-(b2*c1);
    T4=(a3*c2)-(a2*c3);
    T5=(a1*c3)-(a3*c1);
    T6=(a2*c1)-(a1*c2);
    T7=(a2*b3)-(a3*b2);
    T8=(a3*b1)-(a1*b3);
    T9=(a1*b2)-(a2*b1);

    x=((T1*d1)/(t))+((T4*d2)/(t))+((T7*d3)/(t));

    y=((T2*d1)/(t))+((T5*d2)/(t))+((T8*d3)/(t));

    z=((T3*d1)/(t))+((T6*d2)/(t))+((T9*d3)/(t));

    std::cout<<std::endl<<"x= "<<x<<std::endl<<std::endl<<"y= "<<y<<std::endl<<std::endl<<"z= "<<z<<std::endl<<std::endl;

    return(0);
}
