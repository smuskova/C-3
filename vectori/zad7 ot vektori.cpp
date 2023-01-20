#include<bits/stdc++.h>
using namespace std;
int main ()
{
     vector<int> v;
    int n=10,a,m=5,b;
    //cout<<"n=";
    //cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"a=";
        cin>>a;
        v.push_back(i);
    }
    vector<int> v2;
    for(int i =0; i<m; i++)
    {
        cout<<"b="; cin>>b;
        v.push_back(i);

    }
    for(int i=0; i<n; i++)
    {
        if(v[i]==v2[i]) cout<<"obshtite elementi sa;"<<i<<endl;
    }
 return 0;
}
