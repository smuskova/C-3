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
void write2(firma &a)
{
    cout<<a.nomer<<endl;
    cout<<a.ime<<endl;
    cout<<a.staj<<endl;
    cout<<a.godini<<endl;
    cout<<a.zaplata<<endl;

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
int srZap=0;
for(int i=0; i<=n; i++)
{
    srZap=(srZap+v[i].zaplata)/n;

}
cout<<"sredna zaplata na firmata="<<srZap<<endl;
///G
for(int i=0; i<=n; i++)
{
    if(v[i].zaplata<510.00) {cout<<"udvoena zaplata:"<<v[i].zaplata*2<<endl;}
}

///D
for(int i=0; i<=n; i++)
{
    write2(v[i]);
}

///E
int maxi=v[0].zaplata;
for(int i=0; i<=n; i++)
{
    if(v[i].zaplata>maxi) {maxi=v[i].zaplata;}


}cout<<"slujitelqt s nai- visoka zaplata e:"<<maxi<<endl;

int mini=v[0].zaplata;
for(int i=0; i<=n; i++)
{
    if(v[i].zaplata<mini) {mini=v[i].zaplata;}

}
cout<<"slujitelqt s nai- malka zaplata e:"<<mini<<endl;








return 0;
}
