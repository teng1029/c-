#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;

    cout << "Enter two integers to compare: ";
    cin >> x >> y;

    if( x == y )
        cout << "These numbers are equal.\n";

    if( x < y )
        cout << y << " is large. ";

    if( x > y )
        cout << x << " is large. ";
}
