#include<bits/stdc++.h>
using namespace std;
void print(vector<int > v)
{
    for(int i=0; i<v.size(); i++)
       cout<<v[i]<<" ";
}
int main ()
{ int n; cout<<"n="; cin>>n;
vector< int> v;
int a;
for(int i=0; i<n; i++)
{
    cout<<"a="; cin>>a;
    v.push_back(a);
}
    vector<int> v2;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]!=0){ v2.push_back(v[i]); print(v2);}
    }

 return 0;
}
