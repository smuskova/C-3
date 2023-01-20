#include<bits/stdc++.h>
using namespace std;
void print ( students a[], int n)
{
     for(int i=0; i<n; i++)
     {
         cout<<"Godinata v koqto e zapisan studenta:"<<((a[i].fakNomer)[0]-'0')*10+((a[i].godina)[1]-'0')*10)<<endl;

    cout<<"Nomer na fakulteta:"<< (( (a[i].nomerFak)[3]-'0')*10+((a[i].nomerFak)[4]-'0')*10)<<endl;

    cout<<"Nomer na specialnostta:"<< =( ((a[i].nomerSpec)[5]-'0')*10 + ((a[i].nomerSpec)[6]-'0')*10)<<endl;

    cout<<"Vid na obuchenie:"<<(((a[i].vid)[7]-'0')*10) <<endl;

     }
}
int main ()
{


 return 0;
}
