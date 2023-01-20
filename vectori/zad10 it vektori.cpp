#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n=10,a,b;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        cout<<"a=";
        cin>>a;
        if(a>4) cout<<"ERROR"<<endl;
        v.push_back(a);
    }
    vector<int>num;
    for(int i=0; i<4; i++)
    {
        cout<<"b="; cin>>b;
        num.push_back(b);
        num[i]=v[i];
        cout<<num[i]<<endl;
    }


 return 0;
}
