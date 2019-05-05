a) unsigned int values [ 5 ] = { 2 , 4 , 6 ,8 , 10 } ;
b) unsigned int * vPtr ;
c) for ( unsigned int i = 1; i < = values.size() ; ++i )
   {
       cout << values[i];
   }
d) *vPtr = &values;
   vPtr = values;
e) for ( unsigned int i = 1; i <= values.size (); ++i )
   {
       cout << *(vPtr + i);
   }
f) for ( unsigned int i = 1; i <= values.size (); ++i )
   cout << *( v + i );
g) for ( unsigned int i = 1; i <= values.size (); ++i )
   {
       cout << vPtr[i];
   }
h) values[5];
   *(v + 5);
   vPtr[5];
   *(vPtr + 5);
i) values[3] = 6;
j) values[4];
   3;
