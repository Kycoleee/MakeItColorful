#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
unsigned seed;
seed = time (0);
srand (seed);

HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

string player1, player2;
int roll1, roll2;

std::cout << "Enter name for player 1:";
std::cin >> player1;

std::cout << "Enter name for player 2:";
std::cin >> player2;



roll1 = rand() % 20 + 1;
roll2 = rand() % 20 + 1;
 

    
if(roll1 == 1){
    SetConsoleTextAttribute(screen, 4);
    cout << "Critical Failure" << endl;
    std::cout << player1 << " rolled a  " << roll1 << endl;
    }

else if (roll2 == 20){
    SetConsoleTextAttribute(screen, 2);
    cout << "Ctitcal Success" << endl;
    std::cout << player1 <<  " rolled a " << roll2 << endl;
}

if(roll1 == 1){
    SetConsoleTextAttribute(screen, 4);
    cout << "Critcal Failure" << endl;
    std::cout << player2 << " rolled a " << roll1 << endl;

}
else if (roll2 == 20){
    SetConsoleTextAttribute(screen, 2);
    cout << "Critcal Success" << endl;
    std::cout << player2 << " rolled a  " << roll2 << endl;
}


SetConsoleTextAttribute (screen, 7);
if (roll1 > roll2){
    std::cout << " The winner is  " << player1 << endl;
}
else if (roll2 > roll1 ){
    std::cout << " The winner is  " << player2 << endl;
}
else{
    std::cout << "The players are evenly matched  " << endl;
}


return 0;
}