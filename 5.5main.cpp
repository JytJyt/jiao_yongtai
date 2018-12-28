//Ωπ”¿Ã©5.5
#include <iostream>
using namespace std;

int main()
{
   int total = 0;
   int number;
   int value;

   cout << "cin how many number "
      << "followed by the values: \n";
   cin >> number;


   for ( int i = 1; i <= number; i++ )
   {
      cin >> value;
      total += value;
   } // end for

   // display total
   cout << "Sum of the " << number << " values is " << total << endl;
} // end main
