#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin>>n;
    int s=0;
    if(n>30) cout<<"greshka";
    for(int i=1; i<=n; i++)
    {
      s=pow(2,i);
    } cout<<s<<endl;
 return 0;
}
