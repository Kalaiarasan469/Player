#include <iostream>
using namespace std;
class Player15
{
private:
int n,k=0,i,j,c=0;
char ch;
string s;
public:
void get()
{getline(cin,s);}
void find()
{
for(i=0;i<s.length();i++)
{
k=0;
for(j=0;j<s.length();j++)
{
if(s[i]==s[j])
{k++;}
}
if(k>=c)
{
c=k;
ch=s[i];
}
}
cout<<ch;
}
Player15()
{
get();
find();
}
};
int main()
{
Player15 p;
return 0;
}
