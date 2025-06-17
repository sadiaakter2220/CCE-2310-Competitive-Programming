//problem Name:Even Numbers
//Course Title:Competitive Programming Sessional
//course Code:CCE-2310
//Course Teacher Name:Mirza Rakib
//Date:24/3/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==1)cout<<-1<<endl;
    else{
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)cout<<i<<endl;
        }
    }
}


