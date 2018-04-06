#include <iostream>
using namespace std;
class NonRepeated
{
int n,i,c,j,ar[1000];
bool b=true;
void get()
{
cout<<"Input"<<endl;
cin>>n;
for(i=0;i<n;i++)
{cin>>ar[i];}
}
void find()
{
for(i=0;i<n;i++)
{
b=true;
for(j=0;j<n;j++)
{
if(i!=j)
{
if(ar[i]==ar[j])
{b=false;}
}
}
if(b)
{c=ar[i];}
}
}
void put()
{cout<<"\nOutput\n"<<c;}
public:
NonRepeated()
{
get();
find();
put();
}
};
int main() {
NonRepeated c;
return 0;
}
