#include<bits/stdc++.h>
using namespace std;
struct students
{
    string facNomer;
    string egn;

} ;
void read (students &a)
{
    cout<<"Faculteten nomer:";
    getline(cin, a.facNomer);
    cin.ignore();
    cout<<"---------"<<endl;
    cout<<"EGN na studenta:";
    getline(cin, a.egn);
    cin.ignore();

}
void izvlichane ( students facNomer, students egn)
{
    int godina = facNomer.substr(0,2); ///godina v  koqto e zapisan studentut
    int nomerFak = facNomer.substr(2,2); ///nomer na fakulteta
    int nomerSpec=facNomer.substr(4,2); ///nomer na specialnostta
    int vid=facNomer.substr(6,1); ///vid na obuchenie
    int god=egn.substr(0,2);
    int mesec=egn.substr(2,2);
    int den=egn.substr(4,2);
}

int main ()
{ int num;
    cout<<"broq na studentite:";
    cin>>num;

    vector<students> v(num);
    for(int i=0; i<num; i++)
    {
        read(v[i]);

    }
    cout<<endl;
    for(int i=0; i<num; i++)
    {
    int godina = int.Parse(v[i].substr(0,2)); ///godina v  koqto e zapisan studentut
    int nomerFak = int.Parse(v[i].substr(2,2)); ///nomer na fakulteta
    int nomerSpec=v[i].substr(4,2); ///nomer na specialnostta
    int vid=v[i].substr(6,1); ///vid na obuchenie
    int god=b.substr(0,2);
    int mesec=b.substr(2,2);
    int den=b.substr(4,2);
    }

    cout<<endl;


 return 0;
}
