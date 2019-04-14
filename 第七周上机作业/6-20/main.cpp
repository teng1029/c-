#include <iostream>

using namespace std;

int multiple( int a , int b );
int main()
{
    int a;
    int b;

    cout << "Enter two integers: ";
    cin >> a >> b;


    if ( multiple( a,b) )
        cout << b << "is a multiple of " << a << "\n\n" << endl;
    else
        cout << b << "is not a multiple of " << a << "\n\n" << endl;

}

int multiple ( int a , int b )
{
    return !( b % a);
}
