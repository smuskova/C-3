#include<bits/stdc++.h>
using namespace std;
void print(vector<int > v)
{
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}
int main ()
{ vector<int > v;
int a;
for(int i=0; i<10; i++)
{  cout<<"a="; cin>>a;
    v.push_back(a);
}
    //print(v);
    for(int i=0; i<v.size(); i++)
    {
        for(int j=i; j<v.size(); j++)
            if(v[i]+v[j]==10) cout<<v[i]<<"+"<<v[j]<<endl;
    }


 return 0;
}
