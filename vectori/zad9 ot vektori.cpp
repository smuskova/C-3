#include<bits/stdc++.h>
using namespace std;
int main ()
{ int number; cout<<"number="; cin>>number;

    int n=10,a;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        cout<<"a=";
        cin>>a;
        v.push_back(i);
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
         sum+=v[i];
         if(sum<number ) cout<<v[i]<<endl;
    }



    return 0;
}
