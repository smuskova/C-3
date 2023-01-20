#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<double> v;
    int n,a;
    cout<<"n=";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"a="; cin>>a;
        v.push_back(i);
    }
    double sum=0;
    for(int i=0; i<n; i++)
    {sum+= v[i]; cout<<sum<<endl;}
    for(int i=0; i<n; i++)
    if(v[i]>sum/n) cout<<i+1<<endl;


 return 0;
}
