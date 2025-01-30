#include <bits/stdc++.h>
#define INF 1e9
#define endl '\n'
#define optimize ios::sync_with_stdio(0); cin.tie(0)
#define MAXN 100010

using namespace std;

int T, N, M, R;

int main()
{
    optimize;

    cin >> T;

    while(T--)
    {
        cin >> N;
        vector<int> v(60), w(60);

        for(int i = 0; i < N; i++) cin >> v[i] >> w[i];

        cin >> M >> R;

        vector<int> dp(MAXN, 0);

        for(int i = 0; i < N; i++)
        {
            for(int j = M; j >= w[i]; j--) dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }

        if(*max_element(dp.begin(), dp.end()) >= R) cout << "Missao completada com sucesso" << endl;
        else cout << "Falha na missao" << endl;
    }
}