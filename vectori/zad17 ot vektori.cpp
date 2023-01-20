#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //int n; cout<<"n="; cin>>n;
    int a;
    vector<int> v;
    vector<int> v1;
    for(int i=0; i<13; i++)
    {
        cout<<"a=";
        cin>>a;
        v.push_back(a);
    }
    for(int i=0; i<13; i++)
    {
        if(i%2!=0 and v[i]%2==0)
        {
            cout<<v[i]<<endl;
        }
        else cout<<"ne e takova chislo"<<endl;
    }

    return 0;
}
