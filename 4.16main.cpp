#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double hours; //总工作时长
   double rate; //每小时工资
   double salary; //支付总工资


   cout << "Enter hours worked : ";
   cin >> hours;

cout << fixed << setprecision( 2 );


   while ( hours != -1.0 )
   {

      cout << "Enter hourly rate of the employee ($00.00): ";
      cin >> rate;


      if ( hours <= 40 )
         salary = hours * rate;
      else
         salary = 40.0 * rate + ( hours - 40.0 ) * rate * 1.5;

      cout << "Salary is $" << salary;
      cout << "\n\nEnter hours worked (-1 to end): ";
      cin >> hours;
   } // end while
} // end main
