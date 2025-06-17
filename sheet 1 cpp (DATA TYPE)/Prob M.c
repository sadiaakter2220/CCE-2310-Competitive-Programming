//problem Name:Capital or Small or Digit
//Course Title:Competitive Programming Sessional
//course Code:CCE-2310
//Course Teacher Name:Mirza Rakib
//Date:24/3/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
char chr;
cin>> chr;
if(chr>= 97&& chr <= 122)
{
    cout<< "ALPHA" <<endl;
    cout<< "IS SMALL" <<endl;
}
else if(chr>=65&& chr<=90)
{
    cout<< "ALPHA" << endl;
    cout<< "IS CAPITAL" <<endl;

}
else
{
    cout<< "IS DIGIT" << endl;
}
}
