#include<iostream>
int doubledigitadd(int number){
    int num = ((2*number)/10)+((2*number)%10);
    return num;

}
int OddDigits(std::string creditcard)
{   int sum = 0;
    for(int i = creditcard.size()-1 ;i >= 0 ; i -=2)
    {
        sum += (creditcard[i]-'0');
    }
    return sum;
}
int evenDigits(std::string creditcard)
{   int sum = 0;
    for(int i = creditcard.size() - 2 ;i >= 0 ; i -=2)
    {
        sum += doubledigitadd(creditcard[i]-'0');
    }
    return sum;
}
int main()
{   std::cout<<"***CREDIT CARD VALIDATOR PROGRAMME***\n";
     std::cout<<"Please enter you credit card number\n";
     std::string creditcardnumber;
     std::getline(std::cin,creditcardnumber);
     int odd = OddDigits(creditcardnumber);
     int even = evenDigits(creditcardnumber);
     int s = (odd + even )%10;
     if(s==0)
     {
        std::cout<<"Your credit card number is valid\n";

     }
     else
     {
        std::cout<<"Your number is invalid\n";
     }






    return 0;
}