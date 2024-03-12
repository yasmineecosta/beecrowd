#include <bits/stdc++.h>
#include <iostream>
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {
    int C, N, M;
    ld elev;
    cin >> C;
    
    for(int i=0; i<C; i++){
        cin >> N >> M;
        elev = pow(N,M);
        string s = to_string(elev);
        string s2 = "";
        for(int j=0; j<s.size(); j++){
            if(s[j] == '.'){
                s2 = s.erase(j, s.size());
                break;
            }
        }
        cout << s.size() << endl;
    }

    return 0;
}
