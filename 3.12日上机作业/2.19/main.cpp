#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int result1 = 0;
    int result2 = 0;
    int result3 = 0;

    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    result1 = x + y + z;
    result2 = ( x + y + z)/ 3;
    result3 = x * y * z;

    cout << " Input three different integers: " << x << y << z << endl;
    cout << " Sum is " << result1 << endl;
    cout << " Average is " << result2 << endl;
    cout << " Product is " << result3 << endl;

    if ( x < y )
    if ( x < z )
        cout << " Smallest is " << x << endl;
    if ( y < x )
    if ( y < z )
        cout << " Smallest is " << x << endl;
    if ( z < x )
    if ( z < y )
        cout << " Smallest is " << x << endl;

    if ( x > y )
    if ( x > z )
        cout << " Largest is " << x << endl;
    if ( y > x )
    if ( y > z )
        cout << " Largest is " << y << endl;
    if ( z > y )
    if ( z > x )
        cout << " Largest is " << z << endl;

}


