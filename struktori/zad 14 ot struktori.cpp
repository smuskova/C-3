#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using  namespace  std;
struct koordinata
{
    string tochka;
    double abcisaX;
    double ordinataY;
};
void read (koordinata &a)

{   cout<<endl;
    cin.ignore();
    cout<<"Vuvedete tochka:";
    getline(cin, a.tochka);
    cout<<"Vuvedete koordinati X:";
    cin>>a.abcisaX;
    cout<<"Vuvedete koordinati Y:";
    cin>>a.ordinataY;

}
void sortirane(vector<koordinata> &v, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(v[j].abcisaX> v[j+1].abcisaX)
            {
                swap(v[j], v[j+1]);
            }
        }
    }
}
void print1 (koordinata a)
{
    cout<<endl;
    cout<<"Tochka:"<<a.tochka<<endl;
    cout<<"Abcisna os:"<<a.abcisaX<<endl;
    cout<<"Ordinatna os:"<<a.ordinataY<<endl;
    cout<<"---------------------------"<<endl;

}
void print(vector<koordinata> v)
{
    for(int i=0; i<v.size(); i++)
    {
        print1(v[i]);
    }
}
int main()

{ int n; cout<<"vuvedete broq na tochkite:"; cin>>n;

    vector<koordinata> v(n);


///A
for(int i=0; i<n; i++)
{
    read(v[i]);
}
///B
cout<<endl;
print(v);
///A
cout<<endl;
cout<<"SORTIRANE"<<endl;
sortirane(v,n);
print(v);
///B
/*<<"-------------"<<endl;
cout<<"-------------"<<endl;
print(v);*/








return 0;
}
