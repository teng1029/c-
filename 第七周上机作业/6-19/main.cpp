#include <iostream>
#include <cmath>

using namespace std;

int hypotenuse ( double a , double b )
{
    double product;
    double c;

    product = a*a + b*b;
    c = sqrt ( product );

    return c;
}

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    cout << "Please enter two right-angled side lengths:\n";
    cin >> a >> b;

    c = hypotenuse ( a, b);
    cout << "The length of the bevel is " << c << endl;

}

