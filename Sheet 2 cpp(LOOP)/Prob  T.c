//problem Name:Shape 2
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
for(long long line=1;line<=row;line++)
{
   for(long long space=1;space<=(row-line);space++)
   {
       cout<<" ";
   }
   for (long long star=1;star<=(2*line)-1;star++)
   {
       cout<<"*";
   }
   cout<<endl;

}

}
