#include<iostream>
#include<cmath>
int main()
{
    std::cout<<"***RIGHT ANGLE TRIANGLE CALUCULATOR***\n";
    std::cout<<"Enter the length of base of triangle\n";
    double ba;
    std::cin>>ba;

    std::cout<<"\nEnter the length of hieght of triangle\n";
    
    double hi;
    std::cin>>hi;
    std::cout<<"\nThe bigger side between hieght and base is \n"<<std::max(hi,ba);
    std::cout<<"\nThe smaller side between hieght and base is \n"<<std::min(hi,ba);


    double h = sqrt((pow(ba,2)+pow(hi,2)));
    std::cout<<"\nThe length of hypotenuse is"<<h<<'\n';
    double a,b,c,d;
    a = round(h);
    b = floor(h);
    c = ceil(h);

    std::cout<<"\nThe round off of hypotenues is \n"<<a;
    std::cout<<"\nThe round down of hypotenues is \n"<<b;
    std::cout<<"\nThe round up of hypotenues is \n"<<c;



    
   return 0;



}