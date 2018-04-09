#include <iostream>
using namespace std;
class GcD
{
string s;
int n,k,c=0,i,m;
int get()
{
cout<<"Input\n";
cin>>n>>k;
return 0;
}
int find()
{
c=(n<k)?n:k;
for(i=1;i<=c;i++)
{
if(((n%i)==0)&&((k%i)==0))
{
m=i;
}
}
cout<<"Output\n"<<m;
return 0;
}
public:
GcD()
{
get();
find();
}
};
int main()
{
GcD g;
return 0;
}
