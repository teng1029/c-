#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int largest = 0;
    int largest2 = 0;
    unsigned int counter = 0;

    while( ++counter <= 10 )
    {
        cout << "Enter the number:\n";
        cin >> number;

        if ( number > largest )
        {
            largest2 = largest;
            largest = number;
        }
        else
            if( number > largest2 )
            largest2 = number;

    }

    cout << " the largest is :\n" << largest << endl;
    cout << " the largest2 is :\n" << largest2 << endl;


}
