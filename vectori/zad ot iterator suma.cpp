#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector < int > v ;
    int n; cout<<"n="; cin>>n;
    int a;
    for(int i=0; i<n; i++)
    {
        cout<<"a="; cin>>a;
        v.push_back(a);
    }

 int sum =0;
 for ( vector < int >:: iterator it = v . begin (); it != v . end (); it ++) {
 cout<<*it<<endl ;
 sum += *it ;
 }
 cout << " sum = " << sum << endl ;
 return 0;
}
