#include<iostream>
 using namespace std;

 struct employee {
        string name;
        int working_hours;
        double per_hour_rate;
 };


 double grosspaycalc (int hours, double rate){        // calculate gross-pay of a employee
        return hours * rate;
        };

 double total_tax (double gross){                     // calculate total tax acc. to 6% tax
        return gross * 0.06;
        };

 int main(){

     employee e;

     cout << " ENTER THE EMPLOYEE'S NAME: ";
     cin >> e.name;

     cout << " ENTER HIS/HER WORKING HOURS: ";
     cin >> e.working_hours;

     cout << " ENTER HIS/HER PER HOUR RATE: $";
     cin >> e.per_hour_rate;


     double gross_pay = grosspaycalc (e.working_hours, e.per_hour_rate);
     double tax = total_tax (gross_pay);
     double net_salary = gross_pay - tax;

     cout << "                      " << endl;
     cout << " ====PAYROLL-SLIP==== " << endl;
     cout << "                      " << endl;
     cout << " EMPLOYEE'S NAME: " << e.name << endl;
     cout << " HIS/HER WORKING HOURS: " << e.working_hours << endl;
     cout << " HIS/HER PER HOUR RATE: $" << e.per_hour_rate << endl;
     cout << " GROSS PAYROLL: $" << gross_pay << endl;
     cout << " 6% TAX: $" << tax << endl;
     cout << " NET SALARY: $" << net_salary << endl;

     return 0;
}
