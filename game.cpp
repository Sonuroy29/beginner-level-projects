#include <iostream>
#include <cstdlib>
#include <ctime>
 using namespace std;
 int main(){

      srand(time(0));     // random seed generator

      string user, ai;
      string options[] = {"ROCK", "PAPER", "SCISSOR"};

      while (true){
      cout << " |====ROCK|PAPER|SCISSOR====| " << endl;
      cout << "                              " << endl;
      cout << " OPTIONS: (ROCK/PAPER/SCISSOR) " << endl;
      cout << "                              " << endl;
      cout << " ENTER YOUR CHOICE: ";
      cin >> user;

      ai = options[rand() % 3];    // ai will choose from 1,2,3 options

      cout << " YOUR CHOSE: " << user << endl;
      cout << " AI'S CHOSE: " << ai << endl;


    // behind the scene (result checking) :-

      if (user == ai){
          cout << " IT'S A DRAW !! " << endl;
      }

      else if ((user == "ROCK" && ai == "SCISSOR") ||
               (user == "PAPER" && ai == "ROCK") ||
               (user == "SCISSOR" && ai == "PAPER")){
          cout << " HURRAY, YOU WON !! " << endl;
      }

      else if ((user == "ROCK" && ai == "PAPER") ||
               (user == "PAPER" && ai == "SCISSOR") ||
               (user == "SCISSOR" && ai == "ROCK")){
          cout << " OOPS, YOU LOSE " << endl;
      }

      else {
          cout << "              " << endl;
          cout << " INVALID, TRY AGAIN !! " << endl;
          break;
      }

      }

      return 0;
 }
