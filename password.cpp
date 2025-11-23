#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// checking uppercase

bool hasupper(string pass){
     for (char c : pass)
          if (isupper(c))
          return true;
     return false;
}

// checking lowercase

bool haslower(string pass){
     for (char c : pass)
          if (islower(c))
          return true;
     return false;
}

// checking digits

bool hasdigit(string pass){
     for (char c : pass)
          if (isdigit(c))
          return true;
     return false;
}

// checking symbols

bool hassymbol(string pass){
     for (char c : pass)
          if (!isalnum(c))
          return true;
     return false;
}

// calculating score using multiple functions

int strengthscore(string s){
    int score = 0;

    if (s.length() >= 8)  score++;
    if (hasupper(s))  score++;
    if (haslower(s))  score++;
    if (hasdigit(s))  score++;
    if (hassymbol(s))  score++;

    return score;
}

// judging password type acc. to score

string strengthtype(int score){
       if (score <= 2) return "WEAK";
       else if (score == 3) return "MEDIUM";
       else return "STRONG";
}

 int main(){
     string pass;
     cout << "ENTER THE PASSWORD : ";
     cin >> pass;

     int score = strengthscore(pass);
     cout << "PASSWORD STRENGTH : " << strengthtype(score) << endl;
 }





