#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "enter three integers expect 0:\n";
    cin >> a >> b >> c;

    if( a*a == b*b +c*c )
        cout << "These three integers can represent a right triangle.\n" << endl;
    else
        if( b*b == a*a +c*c )
        cout << "These three integers can represent a right triangle.\n" << endl;
    else
        if( c*c == a*a +b*b )
        cout << "These three integers can represent a right triangle.\n" << endl;
    else
        cout << "These three integers can't represent a right triangle.\n" << endl;
}
