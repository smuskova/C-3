#include<bits/stdc++.h>
using namespace std;
void print(vector<int > v)
{
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}
int main ()

{
    int n;
    cout<<"n=";
    cin>>n;
    srand (time(NULL));
    vector<int > v;
    for(int i=0; i<n; i++)
    {
        v.push_back(rand()%20);
    }
    print(v);
    cout<<endl;
    vector<int> v2;
    for(int i=0; i<v.size(); i++)
    {
        for(int j=i+1; j<v.size(); j++)
            if(v[i]==v[j])
            {
                v2.push_back (v[i]);
                print (v2); //cout<<endl;
            }
            //else cout<<"nqma takiva"<<endl;

    }


    return 0;
}
