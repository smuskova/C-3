#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int> v;
    int n,a;
    cout<<"n=";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"a=";
        cin>>a;
        v.push_back(a);
    }

    vector<int > v2;
    for(int i=0; i<n; i++)
    {
        //for(int i=0; i<3; i++)
        //{
            if(v[i]==-1) cout<<v2[i]<<endl;
            if(v[i]==0) cout<<v2[i]<<endl;
            if(v[i]==1) cout<<v2[i]<<endl;

        //}
    }
    return 0;
}
