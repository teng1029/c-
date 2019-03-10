#include <iostream>

using namespace std;

int main()
{
    int PI = 3.14159;
    int r = 0;
    int result1 = 0;
    int result2 = 0;
    int result3 = 0;

    cout << "Enter a integers: ";
    cin >> r;
    result1 = 2 * r;
    result2 = PI * 2 * r;
    result3 = PI * r * r;
    cout << "圆的直径是 " << result1 << endl;
    cout << "圆的周长是 " << result2 << endl;
    cout << "圆的面积是 " << result3 << endl;
    return 0;
}
