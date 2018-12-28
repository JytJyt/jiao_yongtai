#include <iostream>
using namespace std;

int main()
{
   int number;
   int value;
   int smallest;

   cout << "输入要比较的整数数目 ";
   cout << "整数： " << endl;
   cin >> number >> smallest;


   for ( int i = 2; i <= number; i++ )
   {
      cin >> value;


      if ( value < smallest )
         smallest = value;
   } // end for


   cout << "\nThe smallest integer is: " << smallest << endl;
} // end main
