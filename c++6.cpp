#include<iostream>
#include<iomanip>
#include<limits>
double ShowBalance(double balance){
    std::cout<<"The balance of your account is: "<<balance<<std::endl;
    return balance;
}
double ToWithdraw(double balance , double withdraw)
{
    std::cout<<"Enter the amount of money you want to withdraw: \n";
    std::cin>>withdraw;
    if(withdraw<0||withdraw>balance)
    {
        std::cout<<"Invalid input\n";
    }
    balance-=withdraw;
    return balance;
}
double ToDeposit (double balance, double deposit){
    std::cout<<"Enter the amount of money you want to deposit: \n";
    std::cin>>deposit;
    if(deposit<0)
    {
        std::cout<<"Please enter a valid input\n";
    }
    balance+=deposit;
    return balance;
}
int main()
{
  double withdraw , deposit;
  double balance = 0;
  int i;
  do{
  std::cout<<"****BANK MANAGER****\n";
  std::cout<<"Press 1 for showing Balance\n";
  std::cout<<"Press 2 for depositing money\n";
  std::cout<<"press 3 for withdrawing money\n";
  std::cout<<"Press 4 to exit\n";
  std::cout<<"enter your choice: ";
  std::cin>>i;
  std::cin.clear();
  fflush(stdin);
  switch(i){
    case 1: 
    balance = ShowBalance(balance);
    break;
    case 2:
    balance = ToDeposit(balance,deposit);
    break;
    case 3:
    balance = ToWithdraw(balance,withdraw);
    break;
    case 4:
    break;
    default:
    std::cout<<"Please enter a valid choice\n";
    break;
     
  }
 }
  while(i!=4);
  return 0;

  

}