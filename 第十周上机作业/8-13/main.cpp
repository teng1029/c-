#include <iostream>

using namespace std;

void mysteryl( char* , const char *);

int main()
{
    char string1 [ 80 ];
    char string2 [ 80 ];

    cout << "enter two strings: ";
    cin >> string1 >> string2;
}

void mysteryl( char*s1 ,const char*s2 )
{
    while ( *s1 != '\0')
        ++s1;

    for( ; ( *s1 = *s2 ); ++s1,++s2 )
        ;
}
