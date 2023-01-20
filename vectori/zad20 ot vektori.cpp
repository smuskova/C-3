#include<bits/stdc++.h>
using namespace std;
int main ()
{
     int n,a,b; cout<<"n="; cin>>n;
     vector<int> v;
     vector<int> v1;
     for(int i=0; i<n; i++)
     {
         cout<<"a="; cin>>a;
         v.push_back(a);
     }
     for(int j=0; j<n; j++)
     {
         cout<<"b="; cin>>b;
         v1.push_back(b);
     }
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<n; j++)
            if(v[i]!=v1[j]) cout<<v1[j]<<" "<<j<<endl;
            else cout<<"nqma takiva"<<endl;

     }
 return 0;
}
