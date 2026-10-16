#include<iostream>
int main()
{ std::cout<<"***TEMPERATURE CONVERSION PROGRAMME***\n";
    while(1){
 std::cout<<"Enter the unit you want to convert to 'c' for celcius and 'f' for farenhite 'q' to quit \n";
 double a;

  char user_input;
  std::cin>>user_input;
   
  if (user_input == 'c'||user_input=='C'){
    std::cout<<"Enter the number of degree farenhite you want to convert\n";
    std::cin>>a;
    std::cout<<"\nYour temperature in celcius is \n"<<(a-32.0)*(5.0/9.0)<<'\n';
    
  }
  else if (user_input == 'f'||user_input=='F'){
    std::cout<<"Enter the number of degree celcius you want to convert\n";
    std::cin>>a;
    std::cout<<"Your temperature in farenhite is "<<(a)*(9.0/5.0)+32.0<<'\n';
    
  }
  else if(user_input=='q'||user_input=='Q'){
    break;
  }
  else{
    std::cout<<"Please enter valid input\n";
  }
  }
    return 0;

}