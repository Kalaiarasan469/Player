#include <iostream>
using namespace std;
class Player12
{
private:
int i,n,ar[1000],x[1000],k;
public:
void get()
{
cin>>n;
for(i=0;i<n;i++)
{cin>>ar[i];}
cin>>k;
}
void shift()
{
for(i=0;i<n;i++)
{
if(i+k<n-1)
{cout<<ar[n+i-k];}
else
{cout<<ar[i-k];}
}
}
Player12()
{
get();
shift();
}
};
int main()
{
Player12 p;
return 0;
}
