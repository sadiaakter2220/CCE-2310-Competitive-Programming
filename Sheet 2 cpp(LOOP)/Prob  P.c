//problem Name:Shape 1
//Course Title:Competitive Programming Sessional
//course Code:CCE-2310
//Course Teacher Name:Mirza Rakib
//Date:24/3/25
#include<bits/stdc++.h>
using namespace std;
int main ()
{
long long row;
cin>>row;
for(long long line=row;line>=1;line--)
{
    for(long long star=1;star<=line;star++)
    {
        cout<<"*";
    }
    cout<<endl;
}
}
