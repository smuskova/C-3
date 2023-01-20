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
void read(firma &a)
{
    cout<<"nomer:";
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
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<"ime:"<<v[i].ime<<endl;
        cout<<"nomer:"<<v[i].nomer<<endl;
        cout<<"trudov staj:"<<v[i].staj<<endl;
        cout<<"navursheni godini:"<<v[i].godini<<endl;
        cout<<"zaplata:"<<v[i].zaplata<<endl;
    }

}
void actual( vector<firma> &v)
{
    int nom;
    cout<<"vuvedete nomer na slujitel, na kogoto iskate da promenite dannite:";
    cin>>nom;
    bool dali= false;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i].nomer==nom)
        {
            dali=true;
            read(v[i]);
            break;
        }
    }
    if(!dali) cout<<"nqma slujitel s tozi nomer \n";
    else cout<<"dannite bqha uspeshno aktualizirani \n";
}
void deleted( vector<firma> &v)
{
    int nom;
    cout<<"vuvedete nomer na slujitel, na kogoto iskate da iztriete dannite:";
    cin>>nom;
    int n=v.size();
    bool dali= false;
    for(int i=0; i<n; i++)
    {
        if(v[i].nomer==nom)
        {
            dali=true;
            swap(v[i],v[n-1]);
            v.pop_back();
            break;
        }
    }
    if(!dali) cout<<"nqma slujitel s tozi nomer \n";
    else cout<<"dannite bqha uspeshno iztriti \n";
}
int main ()
{
    cout<<"purvo vuvedete broq na slijitelite i tehnite danni:"<<endl;
    int n;
    cout<<"broi slujiteli:";
    cin>>n;
    vector <firma> v(n);

///A
    for(int i=0; i<n; i++)
    {
        read(v[i]);
    }
    char ch;
    do
    {
        system("cls");
        cout<<"\n\n\n\t\t Glavno menu\n";
        ///cout<<"\t\t 1.Vuvejdane na dannite za slujiteli\n";
        cout<<"\t\t 1.Izvejdane na dannite na slujitel pod 60 godini sus zaplata pod minimalnata\n";
        cout<<"\t\t 2.Izvejdane na srednata zaplata na firmata\n";
        cout<<"\t\t 3.Izvejdane na slujitelq s nai- biska/ nai- visoka zaplata\n";
        cout<<"\t\t 4.Aktualizirane\n";
        cout<<"\t\t 5.Iztrivane na slujitel\n";
        cout<<"\t\t 6.Izhod\n";
        cout<<"Vshiat izbor:";
        cin>>ch;
        system("cls");
        switch(ch)
        {
        case '1':
        {
            for(int i=0; i<n; i++)
            {
                if(v[i].godini<60 and v[i].zaplata<510.00) write(v[i]);
            }
        }
        case '2':
        {
            double srZap=0;
            for(int i=0; i<n; i++)
            {
                srZap=srZap+v[i].zaplata/n;

            }
            cout<<"sredna zaplata na firmata="<<srZap<<endl;
        }
        case '3':
        {
            string names="";
            double maxi=v[0].zaplata;
            for(int i=0; i<n; i++)
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


            }cout<<"slujitelqt s nai- visoka zaplata e:"<<names<<"\n"<<"zplatata e: "<< maxi<<endl;

            string name="";
            double mini=v[0].zaplata;
            for(int i=0; i<n; i++)
            {
                if(v[i].zaplata<mini)
                {
                    mini=v[i].zaplata;
                    name=v[i].ime;
                }

            }
            cout<<"slujitelqt s nai- malka zaplata e:"<<name<<"\n"<<"zaplatata e: "<<mini<<endl;

        }
        case'4':
        {
            actual(v);
            cout<<"\n";
            cout<<"\n";
            print(v);
        }
        case'5':
        {
            deleted(v);
            cout<<"\n";
            cout<<"\n";
            print(v);
        }


        }system("pause");
    }while(ch!='4');
    return 0;
}
