#include<iostream>
#include<ctime>
void user_choice(char *space,int choice){
    do{
    
    begin:
    std::cout<<"Enter The box you want to cross\n";
    std::cin>>choice;
    if(space[choice-1]==' ')
    {
        space[choice-1]='X';
    }
    else{
        std::cout<<"The box is already filled";
        goto begin;
    }

}while(choice<1||choice>9);
    
}
void computer_choice(char *space,int i){
    while(1)
    {
    srand(time(0));
     i = (rand()%9);
    if(space[i]==' ')
    {
      space[i]='O';
      break;
    }
    else{
        continue;
    }
    } 
    
    
}
bool winner_decider(char *space,bool *game){
    if(space[0]!=' '&&space[0]==space[1]&&space[1]==space[2]){
    space[0]=='X'? std::cout<<"You Win!!!\n" : std::cout<<"You loose :(\n";
    *game = false;
    }
    else if(space[3]!=' '&&space[3]==space[4]&&space[4]==space[5]){
    space[3]=='X'? std::cout<<"You Win!!!\n" : std::cout<<"You loose :(\n";
    *game = false;
    }
    else if(space[6]!=' '&&space[6]==space[7]&&space[7]==space[8]){
    space[6]=='X'? std::cout<<"You Win!!!\n" : std::cout<<"You loose :(\n";
    *game = false;
    }
    else if(space[0]!=' '&&space[0]==space[3]&&space[3]==space[6]){
    space[0]=='X'? std::cout<<"You Win!!!\n" : std::cout<<"You loose :(\n";
    *game = false;
    }
    else if(space[1]!=' '&&space[1]==space[4]&&space[4]==space[7]){
    space[1]=='X'? std::cout<<"You Win!!!\n" : std::cout<<"You loose :(\n";
    *game = false;
    }
    else if(space[2]!=' '&&space[2]==space[5]&&space[5]==space[8]){
    space[2]=='X'? std::cout<<"You Win!!!\n" : std::cout<<"You loose :(\n";
    *game = false;
    }
    else if(space[0]!=' '&&space[4]==space[8]&&space[0]==space[4]){
    space[0]=='X'? std::cout<<"You Win!!!\n" : std::cout<<"You loose :(\n";
    *game = false;
    }
    else if(space[2]!=' '&&space[2]==space[4]&&space[4]==space[6]){
    space[2]=='X'? std::cout<<"You Win!!!\n" : std::cout<<"You loose :(\n";
    *game = false;
    }
    else if(space[0]!=' '&&space[1]!=' '&&space[2]!=' '&&space[3]!=' '&&space[4]!=' '&&space[5]!=' '&&space[6]!=' '&&space[7]!=' '&&space[8]!=' ')
    {
        std::cout<<"Game is Tie!!!\n";
        *game = false;
    }
    else{
       *game = true;
    }
    return *game;
}
void board(char *space){
    std::cout<<"     |     |     \n";
    std::cout<<"  "<<space[0]<<"  |"<<"  "<<space[1]<<"  "<<"|  "<<space[2]<<"   \n";
    std::cout<<"_____|_____|_____\n";
    std::cout<<"     |     |     \n";
    std::cout<<"  "<<space[3]<<"  |"<<"  "<<space[4]<<"  "<<"|  "<<space[5]<<"   \n";
    std::cout<<"_____|_____|_____\n";
    std::cout<<"     |     |     \n";
    std::cout<<"  "<<space[6]<<"  |"<<"  "<<space[7]<<"  "<<"|  "<<space[8]<<"   \n";
    std::cout<<"     |     |     \n";
    std::cout<<"\n";


}
int main ()
{ char space[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
int  choice;
int i;
bool game=true;
board(space);
do{
    
    user_choice(space,choice);
    board(space);
    winner_decider(space,&game);
    if(game==false)
    {
        break;
    }
    computer_choice(space,i);
    board(space);
    winner_decider(space,&game);

}while(game==true);

    return 0;
}