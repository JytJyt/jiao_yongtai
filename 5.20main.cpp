#include <iostream>
using namespace std;

int main()
{
   int count = 0;
   long int hypotenuseSquared;
   long int sidesSquared;

   cout << "Side 1\tSide 2\tSide3" << endl;

   // side1 values range from 1 to 500
   for ( long side1 = 1; side1 <= 500; side1++ )
   {
      // side2 values range from current side1 to 500
      for ( long side2 = side1; side2 <= 500; side2++ )
      {
         // hypotenuse values range from current side2 to 500
         for ( long hypotenuse = side2; hypotenuse <= 500; hypotenuse++ )
         {
            // calculate square of hypotenuse value
            hypotenuseSquared = hypotenuse * hypotenuse;

            // calculate sum of squares of sides
            sidesSquared = side1 * side1 + side2 * side2;

            // if (hypotenuse)^2 = (side1)^2 + (side2)^2,
            // Pythagorean triple
            if ( hypotenuseSquared == sidesSquared )
            {
               // display triple
               cout << side1 << '\t' << side2 << '\t'
                  << hypotenuse << '\n';
               count++; // update count
            } // end if
         } // end for
      } // end for
   } // end for

   // display total number of triples found
   cout << "A total of " << count << " triples were found." << endl;
} // end main
//参考网上的这个题太难了
