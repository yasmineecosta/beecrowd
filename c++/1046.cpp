#include <bits/stdc++.h>
#include <iostream>
#include <string> 
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {
 
    int start, end;
    cin >> start >> end;
    if(start>end || start==end) cout << "O JOGO DUROU " << (end+24)-start << " HORA(S)" << endl;
    else if(start<end)  cout << "O JOGO DUROU " << end-start << " HORA(S)" << endl;
    
    return 0;
}