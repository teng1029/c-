#include <iostream>

using namespace std;

int main()
{
    double r = 0;
    double Pi = 3.14159;
    double R = 0;
    double D = 0;
    double S = 0;

    cout << "Enter the r\n";
    cin >> r;

    R = 2 * r;
    D = 2 * Pi * r;
    S = Pi * r * r;

    cout << R << endl;
    cout << D << endl;
    cout << S << endl;

}
