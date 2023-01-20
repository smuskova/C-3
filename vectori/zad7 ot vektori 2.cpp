#include<bits/stdc++.h>
using namespace std;

 bool findR(vector<int>v, int x)
{
    int i=0;
    while(v[i]!=x and i<v.size()) i++;
    return v[i]==x;
}
int main ()

{
    vector<int>v,v1;
    int a,b;
    for(int i=0; i<10; i++)
    {
        cout<<"a=";
        cin>>a;
        v.push_back(a);
    }
    for(int i=0; i<5; i++)
    {
        cout<<"b="; cin>>b;
        v1.push_back(a);

    }
    for(int i=0; i<5; i++)
    {
        if(findR(v,v1[i])) cout<<v1[i]<<endl;
    }


 return 0;
}
