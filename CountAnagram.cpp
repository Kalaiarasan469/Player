#include <iostream>
using namespace std;
class CountAnagram
{
string s[1000],v;
bool b;
int n,i,c,n2,j,c2=0;
void get()
{
cout<<"Input"<<endl;
cin>>n;
for(i=0;i<n;i++)
{cin>>s[i];}
}
void count()
{
for(i=0;i<n;i++)
{
v=s[i];
c=0;
b=false;
cout<<"\nC="<<c;
n2=v.length();
if(n2==6)
{
for(j=0;j<n2;j++)
{
if((v[j]=='a')&&b)
{c++;}
switch(v[j])
{
case 'k':c++;break;
case 'a':c++;b=true;break;
case 'b':c++;break;
case 'l':c++;break;
case 'i':c++;break;
}
}
cout<<"\nC="<<c;
if(c==6)
{c2++;}
}
}
}
void put()
{cout<<"\nOutput\n"<<c2;}
public:
CountAnagram()
{
get();
count();
put();
}
};
int main() {
CountAnagram c;
return 0;
}
