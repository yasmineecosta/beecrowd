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

    int n; cin >> n;
    vector<int> v(n), ordv(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        ordv[i] = v[i];
    }
    sort(ordv.begin(), ordv.end());
    map<int, int> m;

    for(int i=0; i<n; i++) m[ordv[i]] = i;
    // cout << m[ordv[i]] << " ";
    // cout << endl;
    for(int i=0; i<n; i++) v[i] = m[v[i]];
    // cout << v[i] << " ";}
    // cout << endl;
    for(int i=0; i<n; i++) cout << v[i] << " ";
    cout << endl;
 
    return 0;
}