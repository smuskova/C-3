#include <iostream>
#include <cstdlib>
#include<bits/stdc++.h>
using  namespace  std;
bool mypredicate (int i, int j) {
  return (i==j);
}
void print(vector<int > v)
{
    for(int i=0; i<v.size(); i++)
       cout<<v[i]<<" ";
}
bool dali(int a, int b)
{
    if(a>b) return true;
    else return false;
}
bool isOdd(int i)
{ return(i>10);} //broi kolko sa po- golemi ot 10
void swap (int a, int b)
{
    int x=a;
    a=b;
    b=x;
}
int  minEl(int a, int b)
{
    if (b<a) return b;
    else return a;
}
int main()
{

srand (time(NULL));
vector<int > v;
for(int i=0; i<10; i++)
{
    v.push_back(rand()%20);
}
print (v);
cout<<'\n';
///sort
sort(v.begin(), v.end());
print(v);
cout<<endl;
sort(v.begin(), v.end(), dali);
print(v);
cout<<endl;

///count

cout<<"br ma 15="<<count(v.begin(), v.end(),15) <<endl;
cout<<"count of odd is:"<<count_if(v.begin(), v.end(), isOdd)<<endl;

///domashna rabota

///find


vector<int>:: iterator it;
it=find(v.begin(), v.end(), 15);
if(it==v.end()) cout<<"Element found in my vector: "<<*it<<endl;
else cout<<"Element not found in my vector"<<endl;

///swap

int a=10, b=20;
swap(a,b);
vector<int> v1(4,a), v2(6,b);
cout << "v1 contains:";
for(it=v1.begin(); it!=v2.end(); it++)
cout<<" "<<*it<<endl;

///min and max elements

/*int result= minmax_element(v. begin(), v. end());
cout << "min is " << *result;
  cout << ", at position " << (result-v.begin()) << '\n';
  cout << "max is " << *result;
  cout << ", at position " << (result-v.begin()) << '\n';*/

///min element

//it=v.begin();
//vector<int> :: iterator it2= v.end()-1;

//min(it,it2 );

//cout<<*it<<endl;
//cout<<*it2<<endl;
//cout<<min(it,it2 )<<endl;
cout<<"min element is:"<<*min_element(v.begin(), v.end())<<endl;


//cout<<minEl(it, it2)<<"\n"<<*it<<endl;


///fill

 fill(v.begin()+1, v.end()-2, 3);
 print(v);
 //for (it=v.begin(); it!=v.end(); it++)
   // cout << ' ' << *it;
  //cout << '\n';


///search
cout<<endl;
int number[]= {1,2,3,4,5,6,7,8,9};
it= search(v.begin(), v. end(), number, number+1);
if(it!=v. end()) cout<<"number found at position "<<" "<<(it-v.begin())<<'\n';
  else
    cout<<"number not found\n"<<endl;







return 0;
}
