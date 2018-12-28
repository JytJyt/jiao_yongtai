#include <iostream>
using namespace std;

int main()
{

   for ( int row = 1; row <= 5; row++ )
   {
   for ( int space = 1; space <= 5 - row; space++ )
         cout << ' ';
         for ( int asterisk = 1; asterisk <= 2 * row - 1; asterisk++ )
         cout << '*';

      cout << '\n';
   } // end for

   for ( int row = 4; row >= 1; row-- )
   {
      // print preceding spaces
      for ( int space = 1; space <= 5 - row; space++ )
         cout << ' ';

      // print asterisks
      for ( int asterisk = 1; asterisk <= 2 * row - 1; asterisk++ )
         cout << '*';

      cout << '\n';
   } // end for

   cout << endl;
} // end main
