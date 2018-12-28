#include <iostream>
using namespace std;

int main()
{
   int size; // number of rows in diamond

   // loop until valid input
   do
   {
      cout << "Enter an odd number for the diamond size (1-19): \n";
      cin >> size;
   } while ( ( size < 1 ) || ( size > 19 ) || ( ( size % 2 ) != 1 ) );

   // top half
   for ( int rows = 1; rows <= size - 2; rows += 2 )
   {
      // print preceding spaces
      for ( int space = ( size - rows ) / 2; space > 0; space-- )
         cout << ' ';

      // print asterisks
      for ( int asterisk = 1; asterisk <= rows; asterisk++ )
         cout << '*';

      cout << '\n';
   } // end for

   // bottom half
   for ( int rows = size; rows >= 0; rows -= 2 )
   {
      // print preceding spaces
      for ( int space = ( size - rows ) / 2; space > 0; space-- )
         cout << ' ';

      // print asterisks
      for ( int asterisk = 1; asterisk <= rows; asterisk++ )
         cout << '*';

      cout << '\n';
   } // end for

   cout << endl;
} // end main
