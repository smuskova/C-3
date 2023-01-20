#include<bits/stdc++.h>
using namespace std;
void print_all ( vector < int >& v )
{
    cout << " v . size ()= " << v. size () << endl ;
    for ( vector < int >:: iterator it = v . begin ();
            it != v . end (); ++ it )
    {
        cout << (* it ) << "␣ " ;
    }
    cout << endl ;
}
int main ( int argc , char * argv [])
{

    const int SIZE =10;
    int values [ SIZE ]= {0 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9};
    vector < int > v ( values , values + SIZE );
    print_all ( v );

    v . insert ( v. begin () , -1);
    v . insert ( v. end () ,10);
    print_all ( v );
    v . erase ( v . begin ());
    v . erase ( v . end () -1);
    print_all ( v );

    v . erase ( v . begin () , v . end ());
    cout << " v . empty ()= "
         << boolalpha << v . empty () << "= "
         << noboolalpha << v . empty () << endl ;
    try
    {
        v . at (1)=10;
    } catch ( out_of_range e )
    {
        cout<< " out_of_range ␣ exception ␣ catched :␣ "
        << e . what () <<endl ;
    }


    return 0;
}
