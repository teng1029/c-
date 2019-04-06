#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int total = 0;
    int average = 0;

    cout << "Please enter a integer:\n";
    cin >> a;

    for ( unsigned int counter = 1; counter <= a; ++counter )
    {
        cin >> b;
        total += b;

    }

    average = total / a;

    cout << " The average is \n" << average << endl;
}
