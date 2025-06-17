//problem Name:One Prime
//Course Title:Competitive Programming Sessional
//course Code:CCE-2310
//Course Teacher Name:Mirza Rakib
//Date:24/3/25
#include<bits/stdc++.h>
using namespace std;
int main ()
{
long long n;
cin>>n;
bool flag=true;
for(long long i=2; i<=sqrt(n);i++)
{
    if(n%i==0)
    {
        flag=false;
        break;
    }
}
if(flag)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}
