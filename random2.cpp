#include <iostream>
#include <cstdlib>
#include <ctime>
 using namespace std;
 int main(){

     srand(time(0));
     int num = rand() % 100 + 1;
     int attempts = 0;
     int maxattempts = 5;

     int guess;

     cout << "                  " << endl;
     cout << " ===== GUESSING GAME ===== " << endl;
     cout << "                  " << endl;

     while (attempts < maxattempts){

     cout << "ENTER YOUR GUESS: ";
     cin >> guess;

     attempts ++;

     if (num > guess){
         cout << "                       " << endl;
         cout << " TOO LOW, TRY AGAIN !! " << endl;
         cout << "                       " << endl;
         cout << " ATTEMPTS LEFT: " << maxattempts - attempts << endl;
         cout << "                       " << endl;
     }

     else if (num < guess){
         cout << "                        " << endl;
         cout << " TOO HIGH, TRY AGAIN !! " << endl;
         cout << "                        " << endl;
         cout << " ATTEMPTS LEFT : " << maxattempts - attempts << endl;
         cout << "                        " << endl;
     }

     else {
         cout << "                  " << endl;
         cout << " CORRECT GUESS !! " << endl;
         cout << "                  " << endl;
         return 0;
     }
  }

     cout << "                                         " << endl;
     cout << " YOU RAN OUT OF ATTEMPTS, THE NUMBER IS: " << num << endl;
     cout << "                                         " << endl;
     return 0;
}
