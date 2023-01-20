#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,n; cin>>a>>n;
    int s=1;
    int p=1;
    for(int i=1;i<=n;i++)
    {
        p=p*a;
        s=s+p;
    } cout<<s<<endl;
 return 0;
}
