#include <bits/stdc++.h>
#include <iostream>
#include <string> 
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {
 
    int N, A, B;
    cin >> N >> A >> B;
    
    if(N >=(A+B)) cout << "Farei hoje!" << endl;
    else cout << "Deixa para amanha!" << endl;
    
    return 0;
}