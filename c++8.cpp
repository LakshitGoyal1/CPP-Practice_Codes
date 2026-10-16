#include<iostream>
#include<ctime>
int main()

{

      while(1){
    srand(time(0));
    int a;
    a = ((rand()%3)+0);
    std::cout<<("Welcome to stone , paper and  scissor game \n RULES> \n choose 0 for stone \n 1 for paper \n 2 for scissor \n If you want to finish leave the game choose 3\n Enter your choice"); 
    int b;
    std::cin>>b;
    if(b==3)
    { 
        break;
    }
  
    else if(a==0 & b==1){
        std::cout<<("Computer chose stone \n");
        std::cout<<("You Win\n");
    }
    else if(a==0 & b==2){
        std::cout<<("Computer chose paper \n");
        std::cout<<("You loose\n");
    }
    else if(a==1 & b==0){
        std::cout<<("Computer chose paper \n");
        std::cout<<("You loose\n");
    }
    else if(a==1 & b==1){
        std::cout<<("Computer chose paper\n");
        std::cout<<("Game is Draw\n");
    }
    else if(a==1 & b==2){
        std::cout<<("Computer chose paper \n");
        std::cout<<("You Win\n");
    }
    else if(a==2 & b==0){
        std::cout<<("Computer chose scissor\n");
        std::cout<<("You win\n");
    }
    else if(a==2 & b==1){
        std::cout<<("Computer chose scissor\n");
        std::cout<<("You loose\n");
    }
    else if(a==2 & b==2){
        std::cout<<("Computer chose scissor \n");
        std::cout<<("Game is draw\n");

  } 
    else if(a==0 & b==0){
        std::cout<<("Computer chose stone\n");
        std::cout<<("Game is Draw\n");
    }
}
  return 0;
}