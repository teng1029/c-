#include <iostream>

using namespace std;

int main()
{
   int a=0;
   int b=0;
   unsigned int total = 0;
   cout << "please enter an integer:\n";
   cin >> a;

   for ( unsigned int counter = 1; counter <= a; ++counter )
    {
        cin >> b;
        total += b;
    };

    cout << "sum is:\n" << total <<endl;

}

