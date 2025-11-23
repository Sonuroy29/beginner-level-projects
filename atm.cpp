#include<iostream>
 using namespace std;
 int main(){

     // important entries :-

       int balance = 5000;     // initial balance
       int pin = 6969;         // atm pin
       int entered_pin;
       int amount;
       int choice;


     cout << "ENTER THE PIN: ";
     cin >> entered_pin;

           // check pin :-

     if (entered_pin != pin){
         cout << "INVALID PIN, ACCESS DENIED" << endl;
         return 0;
     }


     while (true){

           // MAIN MENU LOOP :-

       cout << " ===== ATM MENU ===== " << endl;
       cout << " 1. CHECK BALANCE " << endl;
       cout << " 2. AMOUNT TO DEPOSITE " << endl;
       cout << " 3. AMOUNT TO WITHDRAW " << endl;
       cout << " 4. EXIT " << endl;
       cout << "                   " << endl;
       cout << " ENTER YOUR CHOICE: ";
       cin >> choice;

      if (choice == 1){
          cout << "YOUR BALANCE IS: " << balance << endl;
      }

      else if (choice == 2){
          cout << " AMOUNT TO DEPOSITE: ";
          cin >> amount;

          if (amount <= 0)
             cout << " INVALID ";

          else if (amount > 0){
             balance += amount;

             cout << " DEPOSITED SUCCESSFULLY !!" << endl;
             }
      }


      else if (choice == 3){

             cout << " AMOUNT TO WITHDRAW: ";
             cin >> amount;

           if (amount <= 0)
             cout << " INVALID ";

           else if (amount > balance)
             cout << " INSUFFICIENT BALANCE " << endl;

           else{
             balance -= amount;
             cout << " WITHDRAW SUCCESSFULLY !! " << endl;
             }
      }

      else if (choice == 4){
           cout << " THANK YOU FOR USING OUR ATM " << endl;
           return 0;
      }

      else {
           cout << " INVALID CHOICE, TRY AGAIN !! " << endl;
           break;
      }

      }

      return 0;
}


