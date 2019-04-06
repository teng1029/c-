#include <iostream>

using namespace std;

int main()
{
   int a = 0;
   int b = 0;
   int smellest = 0;

   cout << "Please enter a number:\n";
   cout << "followed by the integers:" << endl;
   cin >> a >> smellest;

   for ( unsigned int counter = 2; counter <= a; ++counter )
   {
       cin >> b;
       if ( b < smellest )
        smellest = b;
   }

   cout << "the smallest integer is:\n" << smellest << endl;
}


