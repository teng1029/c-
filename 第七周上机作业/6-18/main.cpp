#include <iostream>

using namespace std;


int integerPower( int b, int e)
{
    int product = 1;

    for( int counter = 1; counter <= e; ++counter )
    {
        product *= b;
    }

    return product;
}


int integerPower( int b , int e);
int main()
{
    int base;
    int exponent;
    int product;

    cout << "Please enter base and exponent:\n";

    cin >> base >> exponent;

    product = integerPower( base, exponent);
    cout << "The product is:\n" << product << endl;
}


