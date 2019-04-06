#include <iostream>

using namespace std;

int main()
{
    unsigned int total = 1;

    for( unsigned int number = 1; number <= 5; ++ number )
    {
        total *= number;
    }

    cout << "The product is " << total << endl;
}
