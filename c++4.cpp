#include<iostream>
int main()
{
  std::cout<<"***CALCULATOR*****\n";
  std::cout<<"Enter the operant you want to use (+,-,*,/)\n";
  char c;
  double num1,num2;
  std::cin>>c;
  std::cout<<"Enter the value of first number:\n";
  std::cin>>num1;
  std::cout<<"Enter the value of second number:\n";
  std::cin>>num2;
  switch(c){
    case '+':
      std::cout<<num1+num2<<std::endl;
      break;
      
      case '-':
        std::cout<<num1-num2<<std::endl;
        break;
      case '*':
        std::cout<<num1*num2<<std::endl;
        break;
      case '/':
        std::cout<<num1/num2<<std::endl;
        break;
    default:
    std::cout<<"Please enter a valid input operator\n";
    break;



  }

  
std::cout<<"***************\n";


 
 return 0;

}