#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,n; cin>>x>>n;
    int s=1;
    int p=1;
    for(int i=1;i<=n;i++)
    {
        p=p*x;
        s=s+p;
    } cout<<s<<endl;
 return 0;
}
