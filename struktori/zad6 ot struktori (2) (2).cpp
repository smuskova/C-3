#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using  namespace  std;
struct firma
{
    int nomer;
    string ime;
    int staj;
    int godini;
    double zaplata;
};
void read(firma a)
{
    cout<<"nomer;";
    cin>> a.nomer;
    cin.ignore();
    cout<<"ime:";
    getline(cin, a.ime);
    cout<<"trudov staj:";
    cin>>a.staj;
    cout<<"navurshemni godini:";
    cin>>a.godini;
    cout<<"zaplata:";
    cin>>a.zaplata;

}
void write(firma &a)
{
  cout<<a.ime<<endl;
}
void print( vector<firma> v)
{ for(int i=0; i<v.size(); i++)
{
    cout<<"ime:"<<v[i].ime<<endl;
    cout<<"nomer:"<<v[i].nomer<<endl;
    cout<<"trudov staj:"<<v[i].staj<<endl;
    cout<<"navursheni godini:"<<v[i].godini<<endl;
    cout<<"zaplata:"<<v[i].zaplata<<endl;
}

}

int main()
{ int n;
cout<<"broi slujiteli=";  cin>>n;
    vector <firma> v(n);

///A
for(int i=0;i<n;i++)
{
    read(v[i]);
}
///B
for(int i=0; i<=n; i++)
{
    if(v[i].godini<60 and v[i].zaplata<510.00) write(v[i]);
}

///V
double srZap=0;
for(int i=0; i<=n; i++)
{
    srZap=srZap+v[i].zaplata;
    srZap=srZap/n;

}cout<<"sredna zaplata na firmata="<<srZap<<endl;

///G
for(int i=0; i<=n; i++)
{
    if(v[i].zaplata<510.00) {cout<<"udvoena zaplata:"<<v[i].zaplata*2<<endl;}
}

///D
print(v);
///E
string names;
double maxi=v[0].zaplata;
for(int i=0; i<=n; i++)
{
    if(v[i].zaplata>maxi)
    {
        maxi=v[i].zaplata;
        names=v[i].ime;
    }
    if(v[i].zaplata==maxi)
    {
        maxi=v[i].zaplata;
        names+="\n"+v[i].ime;
    }

cout<<"slujitelqt s nai- visoka zaplata e:"<<names<<"\n"<<"zplata"<< maxi<<endl;
}


double mini=v[0].zaplata;
for(int i=0; i<=n; i++)
{
    if(v[i].zaplata<mini) {mini=v[i].zaplata; }

} cout<<"slujitelqt s nai- malka zaplata e:"<<mini<<endl;









return 0;
}
