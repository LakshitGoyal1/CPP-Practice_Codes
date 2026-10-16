#include <iostream>
#include <cctype>
#include <string>

int main ()
{ std::string questions[] ={"1 When was India indipendant?\n",
                            "2 What is the captal of India?\n",
                             "3 Who is the current prime minister of India?\n",
                             "4 Is the earth flat?\n"};
 std::string options[4][4]= {{"a 1947","b 2014","c 1951","d 1857"},
                             {"a Mumbai","b New DElhi","c Kolkata","d Chennai"},
                             {"a Draupadi murmu","b Shah Rukh Khan","C Amit shah","d Narendra Modi"},
                             {"a yes ", "b maybe",  "c No","d idk"}};
                            

char c[]={'A','B','D','C'};
char guess;
int score=0;
std::cout<<"***QUIZ TIME!!!***\n";

for (int i=0;i<4;i++){
    std::cout<<questions[i];
    for(int j=0;j<4;j++)
    {
        std::cout<<options[i][j]<<'\n';
    }
    std::cin>>guess;
    guess=toupper(guess);
    if(guess==c[i]){
        std::cout<<"COREECT!!!\n";
       score++;

    }
    else{
        std::cout<<"WRONG\n";
    }
}
 
    std::cout<<"You gave "<<score<<" correct answers That makes your score "<<(score/4.0)*100<<"%\n";
    return 0;
    
}