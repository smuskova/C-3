#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n=10,a;
    vector<int> v(10,0);
    for(int i=0; i<n; i++)
    {
        cout<<"a=";
        cin>>a;
        v.push_back(i);
    }
    vector<int> v2(2,0);
    for(int i=0; i<n; i++)
    {
        if(v[i]==0) cout<<v2[0]<<endl;
        if(v[i]==1) cout<<v2[1]<<endl;
        //cout<<v2<<endl;

    }

    return 0;
}
