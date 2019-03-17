#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int result = 0;

    cout << "Enter one integer: ";
    cin >> x;

    result = x % 2 ;

    if ( result == 0 )
        cout << "The integer is even number." << endl;
    if ( result != 0 )
        cout << "The integer is odd number." << endl;


}
