#include <iostream>
using namespace std;

int main()
{
   int value;
   int count = 0; // number of inputs
   int total = 0; // sum of inputs


   cout << "Enter integers (9999 to end):" << endl;
   cin >> value;


   while ( value != 9999 )
   {
      total += value;
      count++;

      cin >> value;
   } // end while


   if ( count != 0 )
      cout << "ƽ��ֵΪ: "
         << static_cast< double > ( total ) / count << endl;
   else
      cout << "û������ʵ�����" << endl;
} // end main
