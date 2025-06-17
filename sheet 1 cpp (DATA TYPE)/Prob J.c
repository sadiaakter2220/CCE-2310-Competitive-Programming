//problem Name:Multiples
//Course Title:Competitive Programming Sessional
//course Code:CCE-2310
//Course Teacher Name:Mirza Rakib
//Date:24/3/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long A, B;
   cin >> A >> B;
   if (A % B == 0 || B % A == 0)
   {
       cout<< "Multiples" <<endl;
   }
   else
   {
       cout<< "No Multiples" <<endl;
   }
   return 0;
}
