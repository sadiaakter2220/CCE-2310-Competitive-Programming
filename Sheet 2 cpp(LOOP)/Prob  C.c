//problem Name:Even,Odd,Positive,Negative
//Course Title:Competitive Programming Sessional
//course Code:CCE-2310
//Course Teacher Name:Mirza Rakib
//Date:24/3/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,n,even=0,odd=0,pos=0,neg=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a%2==0)even++;
        if(a%2!=0)odd++;
        if(a>0)pos++;
        if(a<0)neg++;
    }
    cout<< "Even: " <<even<<endl;
    cout<< "Odd: " <<odd<<endl;
    cout<< "Positive: " <<pos<<endl;
    cout<< "Negative: " <<neg<<endl;

}
