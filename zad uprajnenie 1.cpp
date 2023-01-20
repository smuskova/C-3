#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int s=0;
    for(int i=99;i>=11;i=i-2)
    {
        s=sqrt(s+i);
    } cout<<s<<endl;

 return 0;
}
