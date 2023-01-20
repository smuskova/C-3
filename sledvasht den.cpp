#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int sd,d,m,y;
   cin>>d>>m>>y;
   switch(m)
   {
   case 1:case 3:case 5: case 7: case 8: case 10: case 12:
    sd=31; break;
    case 4: case 6: case 9: case 11: sd=30; break;
    case 2:if(y%4==0 && y%100!=0 || y%400==0)sd=29;
    else sd=28;
   }
   if(d==sd)

       if(m==12){d=1; m=1; y++;}
       else{d=1; m++;}

   else d++;
   cout<<d<<"/"<<m<<"/"<<y<<endl;

 return 0;
}
