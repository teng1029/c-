#include <iostream>

using namespace std;

int main()
{
    unsigned int count;

    for ( count = 1; count < 5; ++ count )
    {
        cout << count << " ";
    }

    count = count ;
    cout << "\nBroke out of loop at count = " << count << endl;
}
