#include <iostream>
using  namespace std;

int main()
{
    int x = 0;
    int y = 0;
    int result1 = 0;
    int result2 = 0;
    int result3 = 0;
    int result4 = 0;

    cout << "Enter two integers: ";
    cin >> x >> y;
    result1 = x + y;
    result2 = x * y;
    result3 = x - y;
    result4 = x / y;
    cout << "The product1 is " << result1 << endl;
    cout << "The product2 is " << result2 << endl;
    cout << "The product3 is " << result3 << endl;
    cout << "The product4 is " << result4 << endl;
}
