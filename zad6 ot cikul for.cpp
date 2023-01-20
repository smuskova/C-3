#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin>>n;
    double s=0;
    for(int i=1; i<=n; i++)
    {
        s=s+1.0/(i*i);
    } cout<<s<<endl;
 return 0;
}
