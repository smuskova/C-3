#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, a; cout<<"n="; cin>>n;

    vector<int > v;
    vector< int > ::iterator it;
    for(int i=0; i<n; i++)
    {
        cout<<"a="; cin>>a;
        v.push_back(a);
    }
    int pr=1;
    for(it=v.begin(); it!=v. end(); it++)
    {
      cout<<*it<<endl;
      pr*= *it;
    }
     cout<<"proizvedenieto="<<pr<<endl;
 return 0;
}
