//number guessing game

#include<iostream>
#include<ctime>

int main(){
    std::cout<<"***NUMBER GUESSING GAME ***\n";
    int a , b , c=1;
    srand(time(NULL));
    a = rand()%100 +1;
    while(1){
        std::cout<<"Choose a number between 1 to 100 \n";
        std::cin>>b;
        if(!(b>0)||!(b<101)){
            std::cout<<"Please enter a valid number\n";
            continue;
        }
       else if(a>b){
            std::cout<<"The number is higher\n";
            c++;
            continue;
            
        }
       else if(a<b){
            std::cout<<"The number is lower\n";
            c++;
            continue;
        }
       else if(a==b){
         std::cout<<"Congrats you have guessed the number!!!\n";
         std::cout<<"You took:"<<c<<" attempts to guess the number\n";
         break;

       }
    }
  
  return 0;
}