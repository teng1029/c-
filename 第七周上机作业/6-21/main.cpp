#include <iostream>

using namespace std;

int iseven ( int x )
{
    int product;

    product = x % 2;

    if ( product == 0 )
        return true;
    else
        return false;
}

int main()
{
    int a = 0;
    int b = 0;

    cout << "please enter an sum\n";
    cin >> b;

    for ( int counter = 0; counter <= b; counter++ )
    {
        cout << " enter an integer: ";
        cin >> a;

        if ( iseven( a ))
            cout << a << "is an even integer" << endl;
        else
            cout << a << "is not an even integer" << endl;
    }
    cout << endl;
}
