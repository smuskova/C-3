#include<bits/stdc++.h>
using namespace std;
void print(vector<int > v)
{
    for(int i=0; i<v.size(); i++)
       cout<<v[i]<<" ";
}
int main ()
{
    int n,a; cout<<"n="; cin>>n;
    vector <int> v;
    for(int i=0; i<12; i++)
    {
        cout<<"a="; cin>>a;
        v.push_back(a);
    }
    print(v);
    cout<<endl;
    for(int i=0; i<v.size(); i++)
    {
        for(int j=i; j<v.size(); j++)
        {
            if(v[i]+v[j]==n) cout<<"index="<<i<<" "<<j<<endl;
        }
    }
 return 0;
}
