#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define lli long long int
#define ld  long double
#define MAXN 10100
#define INTMAX 10000000000
#define pii pair<int, int> 
#define piii pair<int, pair<int,int>>
#define ALL(x) x.begin(), x.end()

using namespace std;

int main(){
    optimize;

    int n;

    cin >> n;

    if(n == 61) cout << "Brasilia" << endl;
    else if(n == 71) cout << "Salvador" << endl;
    else if(n == 11) cout << "Sao Paulo" << endl;
    else if(n == 21) cout << "Rio de Janeiro" << endl;
    else if(n == 32) cout << "Juiz de Fora" << endl;
    else if(n == 19) cout << "Campinas" << endl;
    else if(n == 27) cout << "Vitoria" << endl;
    else if(n == 31) cout << "Belo Horizonte" << endl;
    else cout << "DDD nao cadastrado" << endl;

    return 0;
}