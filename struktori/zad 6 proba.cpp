#include<bits/stdc++.h>
using namespace std;
struct firma
{
    int nomer;
    string ime;
    int staj;
    int godini;
    double zaplata;
};
void write2(firma &a)
{
    cout<<a.nomer<<endl;
    cout<<a.ime<<endl;
    cout<<a.staj<<endl;
    cout<<a.godini<<endl;
    cout<<a.zaplata<<endl;

}
int main ()
{ int n; cin>>n;
     vector <firma> v(n);

    for(int i=0; i<v.size(); i++)
{
    write2(v[i]);
}
 return 0;
}
