#include<bits/stdc++.h>
using namespace std;
bool vutre(int Xp,int  Yp,int X,int  Y , int Rm,int Rg,int r)
{
int n= sqrt((X-Xp)*(X-Xp)+ (Y-Yp)*(Y-Yp));
    if((n-r)>=Rm and (n+r)<=Rg) return true;
        return false;

}
bool vun(int Xp,int  Yp,int X,int  Y , int Rm,int Rg,int r)
{

int n= sqrt((X-Xp)*(X-Xp)+ (Y-Yp)*(Y-Yp));
if((n-r)>=Rg or (n+r)<=Rm) return true;
return false;

}
int main ()
{ system("color bd" );
    int  Xp, Yp,X, Y , Rm,Rg,r;

    cout<<"koordinatite na centura na okrujnostta:";
    cout<<"Xp=";cin>>Xp;
    cout<<"Yp="; cin>>Yp;
    cout<<"Rm=";cin>>Rm;
    cout<<"Rg="; cin>>Rg;
    cout<<endl;
    cout<<"centur i radius na zvezda:"<<endl;
    cout<<"X="; cin>>X;
    cout<<"Y="; cin>>Y;
    cout<<"r="; cin>>r;
if(vutre(Xp, Yp,X, Y , Rm,Rg,r)) cout<<"vutre"<<"\n";
else
    {
    if(vun(Xp, Yp,X, Y , Rm,Rg,r)) cout<<"vun"<<"\n";
else cout<<"chatichno"<<endl;


    }



    return 0;
}
