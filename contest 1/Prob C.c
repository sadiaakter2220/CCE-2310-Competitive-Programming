// Problem Name : Next Alphabet
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date�:�24/03/25
#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    cin >> c;
    if (c == 'z') {
        cout << 'a' << endl;
    } else {
        cout << (char)(c + 1) << endl;
    }
    return 0;
}

