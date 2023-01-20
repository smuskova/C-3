#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v )
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";

    }cout<<endl;
}
int main ()
{
    vector<int> v;
    int a;
    for(int i=0; i<9; i++)
    { cout<<"a=";
      cin>>a;
      v.push_back(a);
    }
    print(v);
    cout<<"min element:"<<* min_element(v.begin(), v.end())<<endl;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]!= *min_element(v.begin(), v.end())) cout<<v[i];
    }print(v);

 return 0;
}
