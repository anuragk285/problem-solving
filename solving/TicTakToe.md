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

bool checkWinner(){

    if(spaces[0]==spaces[1] && spaces[1]==spaces[2] && spaces[0]=='X'){
        
        std::cout<<"You Won! ";

return false;
    }else if(spaces[3]==spaces[4] && spaces[4]==spaces[5] && spaces[3]=='X'){
        
        std::cout<<"You Won!";


return false;    }if(spaces[6]==spaces[7] && spaces[7]==spaces[8] && spaces[6]=='X'){
        
        std::cout<<"You Won! ";

return false;        
    }if(spaces[0]==spaces[3] && spaces[3]==spaces[6] && spaces[0]=='X'){
        
        std::cout<<"You Won! ";

return false;        
    }if(spaces[1]==spaces[4] && spaces[4]==spaces[7] && spaces[1]=='X'){
        
        std::cout<<"You Won! ";

return false;        
    }if(spaces[2]==spaces[5] && spaces[5]==spaces[8] && spaces[2]=='X'){
        
        std::cout<<"You Won! ";

return false;        
    }if(spaces[0]==spaces[4] && spaces[4]==spaces[8] && spaces[0]=='X'){
        
        std::cout<<"You Won! ";

return false;        
    }else if(spaces[2]==spaces[4] && spaces[4]==spaces[6] && spaces[2]=='X'){

        std::cout<<"You Won!";
        return false;
    }else if(spaces[0]==spaces[1] && spaces[1]==spaces[2] && spaces[0]=='O'){
        
        std::cout<<"You Lose !";
        return false;

    }else if(spaces[3]==spaces[4] && spaces[4]==spaces[5] && spaces[3]=='O'){
        
        std::cout<<"YouLose !";

return false;
    }if(spaces[6]==spaces[7] && spaces[7]==spaces[8] && spaces[6]=='O'){
        
        key = false;
        std::cout<<"You Lose !";
        
    }if(spaces[0]==spaces[3] && spaces[3]==spaces[6] && spaces[0]=='O'){
        
        std::cout<<"You Lose !";
        return false;
        
    }if(spaces[1]==spaces[4] && spaces[4]==spaces[7] && spaces[1]=='O'){
        
        std::cout<<"You Lose !";
        return false;
        
    }if(spaces[2]==spaces[5] && spaces[5]==spaces[8] && spaces[2]=='O'){
        
        std::cout<<"You Lose !";
        return false;
        
    }if(spaces[0]==spaces[4] && spaces[4]==spaces[8] && spaces[0]=='O'){
        
        std::cout<<"You Lose !";
        return false;
        
    }else if(spaces[2]==spaces[4] && spaces[4]==spaces[6] && spaces[2]==')'){

        std::cout<<"You Lose !";
        return false;
    }else {
        for(int i=0; i<9; i++) if(spaces[i]==' ') return true; 
        std::cout<<" ITS A TIE ";
        return false;
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
        }while((!(0<=playerChoice && playerChoice<=8)) || !(spaces[playerChoice]==' '));
    
        spaces[playerChoice] = player;
        
        do{
            computerChoice = rand() % 9;

        }while(!(spaces[computerChoice]==' '));

        spaces[computerChoice] = computer;

        displayboard();

        std::cout<<"\n";

        key = checkWinner();
    }
    return 0;
}
```
