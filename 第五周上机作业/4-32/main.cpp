#include <iostream>

using namespace std;

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    cout << "Enter three numbers:\n";
    cin >> a >> b >> c;

    if( a+b > c)
    if( a+c > b)
    if( b+c > a)
        cout << "These three numbers can represent a triangle.\n" << endl;
    else
        cout << "These three number can't represent a triangle.\n" << endl;

}
