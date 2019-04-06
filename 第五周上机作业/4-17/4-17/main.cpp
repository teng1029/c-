#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int largest = 0;
    unsigned int counter = 0;

    while ( ++counter <=10 )
    {
        cout << "please enter number\n";
        cin >> number;


        if( largest <= number )
            largest = number;
        else
            largest = largest;



    }

    cout << "the largest is:\n" << largest << endl;
}
