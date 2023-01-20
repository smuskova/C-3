#include<bits/stdc++.h>
using namespace std;
int main ()
{int a;
vector<int > v;
int x;
cin>>x;
for(int i=0; i<13; i++)
{
    cout<<"a="; cin>>a;
    v.push_back(a);

}
for(int i=0; i<v.size(); i++)
{
    if(v[i]<sqrt(x)) cout<<i<<endl;
}

 return 0;
}
