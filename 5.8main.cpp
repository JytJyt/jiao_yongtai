#include <iostream>
using namespace std;

int main()
{
   int number;
   int value;
   int smallest;

   cout << "����Ҫ�Ƚϵ�������Ŀ ";
   cout << "������ " << endl;
   cin >> number >> smallest;


   for ( int i = 2; i <= number; i++ )
   {
      cin >> value;


      if ( value < smallest )
         smallest = value;
   } // end for


   cout << "\nThe smallest integer is: " << smallest << endl;
} // end main
