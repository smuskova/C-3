#include<bits/stdc++.h>
using namespace std;
struct students
{
    int nomer; ///br uchenici i tehnite nomera
    string name; ///ime na studenta
    int godina; ///godina v  koqto e zapisan studentut
    int nomerFak; ///nomer na fakulteta
    int nomerSpec; ///nomer na specialnostta
    int vid; ///vid na obuchenie
    int nomerZap; ///poreden nomer na zapisvane
    int god;
    int mesec;
    int den;
    int neshto;
};
void read (students &a)
{
    cout<<endl;
    cout<<"nomer:";
    cin>>a.nomer;
    cin.ignore();
    cout<<"ime na studenta:";
    getline(cin, a.name);
    cout<<endl;
    cout<<"Godinata v koqto e zapisan studenta:";
    cin>>a.godina;
    cout<<"Nomer na fakulteta:";
    cin>>a.nomerFak;
    cout<<"Nomer na specialnostta:";
    cin>>a.nomerSpec;
    cout<<"Vid na obuchenie:";
    cin>>a.vid;
    cout<<"Nomer na zapisvane:";
    cin>>a.nomerZap;
    cout<<endl;
    cout<<"EGN"<<endl;
    cout<<"Godina na rajdane:";
    cin>>a.god;
    cout<<"Mesec, v koito e roden studentut:";
    cin>>a.mesec;
    cout<<"Den, v koito e roden studentut:";
    cin>>a.den;
    cout<<"Vuvedete poslednite 4 cifri ot EGN-to:";
    cin>>a.neshto;
    cout<<"---------------------------------------------------"<<endl;

}
void print1(students a)
{
    cout<<endl;
    cout<<"nomer:"<<a.nomer<<endl;

    cout<<"ime na studenta:"<<a.name<<endl;

    cout<<"Godinata v koqto e zapisan studenta:"<<a.godina<<endl;

    cout<<"Nomer na fakulteta:"<<a.nomerFak<<endl;

    cout<<"Nomer na specialnostta:"<<a.nomerSpec<<endl;

    cout<<"Vid na obuchenie:"<<a.vid<<endl;

    cout<<"Nomer na zapisvane:"<<a.nomerZap<<endl;
    cout<<"------------------------------------------------------"<<endl;
}
void print(vector<students> v)
{
    for(int i=0; i<v.size(); i++)
    {
        print1(v[i]);
    }
}
void printt(vector<students> v)
{
    for(int i=0; i<v.size(); i++)
    {
        if(v[i].nomerSpec==1 and v[i].vid==1 and (v[i].godina>=1999 and v[i].godina<=2009))
        {
            print1(v[i]); ///s tova ne stava i zatova go slojih kato komentar
        }
    }
}
void sortirane(vector<students> v, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(v[j].nomerSpec> v[j+1].nomerSpec or (v[j].nomerSpec== v[j+1].nomerSpec and  v[j].god> v[j+1].god))
        {
            swap(v[j], v[j+1]);
        }
        }
    }
}
void sortirane2(students a[], int n)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n-i; j++)
                {
                    if(a[j].nomerSpec> a[j+1].nomerSpec)
                    {
                        swap(a[j], a[j+1]);
                    }
                    else
                    {
                        if(a[j].nomerSpec== a[j+1].nomerSpec)
                        {
                            for(int i=0; i<n; i++)
                            {
                                for(int j=0; j<n-i; j++)
                                {
                                    if(a[j].god> a[j+1].god)
                                    {
                                        swap(a[j], a[j+1]);
                                    }
                                }
                            }


                        }
                    }
                }
            }
        }
        int main ()
        {
            int num;
            cout<<"broq na studentite:";
            cin>>num;
            students a[100];
            vector<students> v(num);
            for(int i=0; i<num; i++)
            {
                read(v[i]);

            }
            cout<<endl;
            print(v);
            cout<<endl;
            cout<<"-----------------------------------------------"<<endl;
            cout<<"-----------------------------------------------"<<endl;
            cout<<endl;

            printt(v);

            cout<<endl;
            cout<<"-----------------------------------------------"<<endl;
            cout<<endl;

            sortirane(v,num);
                        print(v);








            return 0;
        }
        /*
        3
        1
        pesho
        2001
        01
        01
        1
        345
        1985
        6
        5
        1253

        2
        ivan
        2000
        01
        03
        2
        153
        1983
        4
        3

        3
        dragan
        2006
        01
        01
        1
        123
        1984
        7
        15
        2643
        8*/

