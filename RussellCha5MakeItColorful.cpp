#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;



int main(){
    unsigned seed;
    seed = time(0);
    srand(seed);



    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

    string player1, player2;
    int roll1, roll2;
    
    SetConsoleTextAttribute(screen, 10);
    string result1, result2;
    SetConsoleTextAttribute(screen, 7);

    cout << "Enter a name for Player 1: ";
    getline(cin, player1);
     cout << "";
    cout << "Enter name for Player 2: ";
    getline(cin, player2);


    cout << " ";


    roll1 = rand() % 20 + 1;
    roll2 = rand() % 20 + 1;

    




    cout << player1 << " rolled on the number: " << roll1 << endl;
    cout << player2 << " rolled on the number:"  << roll2 << endl;



    if(roll1 == 1){
        SetConsoleTextAttribute(screen, 4);
        result1 = "Critical Failure";
        cout << player1 << " rolled was a " << result1 << endl;
        SetConsoleTextAttribute(screen, 7);
    }
    else if(roll1 == 20){
        SetConsoleTextAttribute(screen, 10);
        result1 = "Critcal Success";
        cout << player1 << " rolled was a " << result1;
        SetConsoleTextAttribute(screen, 7);
    }
    

    if(roll2 == 1){
        SetConsoleTextAttribute(screen, 4);
        result2 = "Critcal Failue";
        cout << player2 << " rolled was a " << result2 << endl;
        SetConsoleTextAttribute(screen, 7);
    }
    
    else if(roll2 == 20){
        SetConsoleTextAttribute(screen, 10);
        result2 = "Critical Success";
        cout << player2 <<  " rolled was a " << result2;
        SetConsoleTextAttribute(screen, 7);
    
    }
     
    if(roll1 > roll2){
         cout << player1 << " wins!" << endl;
     }
     else if (roll2 > roll1){
         cout << player2 << " wins!" <<endl;
     }
     else{
         cout << "The player rolls are tied!" << endl;
     } 




















}