# Tick Tak Toe Game
```cpp
#include<iostream>

bool key=true;

char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

void displayboard(){

    std::cout<<" "<<spaces[0]<<" | "<<spaces[1]<<" | "<<spaces[2];

    std::cout<<"\n___|___|__\n";
    
    std::cout<<" "<<spaces[3]<<" | "<<spaces[4]<<" | "<<spaces[5];
    
    std::cout<<"\n___|___|__\n";
    
    std::cout<<" "<<spaces[6]<<" | "<<spaces[7]<<" | "<<spaces[8];
}

void checkWinner(){

    if(spaces[0]==spaces[1] && spaces[1]==spaces[2] && spaces[0]=='X'){
        
        key = false;
        std::cout<<"You Won! ";

    }else if(spaces[3]==spaces[4] && spaces[4]==spaces[5] && spaces[3]=='X'){
        
        key = false;
        std::cout<<"You Won!";

    }if(spaces[6]==spaces[7] && spaces[7]==spaces[8] && spaces[6]=='X'){
        
        key = false;
        std::cout<<"You Won! ";
        
    }if(spaces[0]==spaces[3] && spaces[3]==spaces[6] && spaces[0]=='X'){
        
        key = false;
        std::cout<<"You Won! ";
        
    }if(spaces[1]==spaces[4] && spaces[4]==spaces[7] && spaces[1]=='X'){
        
        key = false;
        std::cout<<"You Won! ";
        
    }if(spaces[2]==spaces[5] && spaces[5]==spaces[8] && spaces[2]=='X'){
        
        key = false;
        std::cout<<"You Won! ";
        
    }if(spaces[0]==spaces[4] && spaces[4]==spaces[8] && spaces[0]=='X'){
        
        key = false;
        std::cout<<"You Won! ";
        
    }else if(spaces[2]==spaces[4] && spaces[4]==spaces[6] && spaces[2]=='X'){

        key = false;
        std::cout<<"You Won!";
    }else if(spaces[0]==spaces[1] && spaces[1]==spaces[2] && spaces[0]=='O'){
        
        key = false;
        std::cout<<"You Lose !";

    }else if(spaces[3]==spaces[4] && spaces[4]==spaces[5] && spaces[3]=='O'){
        
        key = false;
        std::cout<<"YouLose !";

    }if(spaces[6]==spaces[7] && spaces[7]==spaces[8] && spaces[6]=='O'){
        
        key = false;
        std::cout<<"You Lose !";
        
    }if(spaces[0]==spaces[3] && spaces[3]==spaces[6] && spaces[0]=='O'){
        
        key = false;
        std::cout<<"You Lose !";
        
    }if(spaces[1]==spaces[4] && spaces[4]==spaces[7] && spaces[1]=='O'){
        
        key = false;
        std::cout<<"You Lose !";
        
    }if(spaces[2]==spaces[5] && spaces[5]==spaces[8] && spaces[2]=='O'){
        
        key = false;
        std::cout<<"You Lose !";
        
    }if(spaces[0]==spaces[4] && spaces[4]==spaces[8] && spaces[0]=='O'){
        
        key = false;
        std::cout<<"You Lose !";
        
    }else if(spaces[2]==spaces[4] && spaces[4]==spaces[6] && spaces[2]==')'){

        key = false;
        std::cout<<"You Lose !";
    }
}
char player = 'X', computer = 'O';

int main(){
    
    int playerChoice, computerChoice;
    
    while(key){

        do{
            std::cout<<"Select option (1 to 9): ";
            std::cin>>playerChoice;
            playerChoice--;
            //std::cout<<"player choice = "<<playerChoice<<"\n";
        }while((!(0<=playerChoice && playerChoice<=8)) && spaces[playerChoice]==' ');
    
        spaces[playerChoice] = player;
        
        checkWinner();
        do{
            computerChoice = rand() % 9;

        }while(!(spaces[computerChoice]==' '));

        spaces[computerChoice] = computer;

        if(key) displayboard();

        std::cout<<"\n";

        if(key) checkWinner();
    }
    return 0;
}
```
