#include<bits/stdc++.h>
using namespace std;
int main ()
{  int n,a; cout<<"n="; cin>>n;
     vector<int> v;

     for(int i=0; i<12; i++)
     {
         cout<<"a="; cin>>a;
         v.push_back(a);
     }
     for(int i=0; i<12; i++)
     {
         if(v[i]%n==0) cout<<v[i]<<" "<<i<<endl;
         else cout<<v[i]<<" "<<"ne se deli na"<<" "<<n<<endl;
     }

 return 0;
}
