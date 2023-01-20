#include  <iostream>
#include  <cstdlib>
using  namespace  std;
int main()
{
   double x,y;
    cin>>x>>y;
    double d=1;
    while(x<y)
    {
        x=x+x*0.1;
        d++;
    }
    cout<<d<<endl;
    return 0;

}
