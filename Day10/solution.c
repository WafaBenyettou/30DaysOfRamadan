#include <stdio.h>
#include <string.h>
#define MAXN 120
#define MAXM 120

int T, N, M, K;
int A[MAXN];
int cnt[MAXM];
long long dp[MAXM];

void solve() {
    scanf("%d%d%d", &N, &M, &K);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        for (int j = 0; j < M; j++) {
            cnt[j] += ((A[i] >> j) & 1);
        }
    }
    long long ans = 0;
    for (int x = M - 1; x >= 0; x--) {
        if (cnt[x] <= N / 2) {
            continue;
        }
        int C_x = (1 << x);
        long long sum = 0;
        for (int i = 0; i < N; i++) {
            if ((A[i] & C_x) == 0) {
                sum += A[i];
            }
        }
        memset(dp, 0, sizeof(dp));
        for (int k = 0; k <= K; k++) {
            for (int i = 0; i < x; i++) {
                if (cnt[i] <= N / 2) {
                    dp[k] += 1LL * cnt[i] * (1 << i);
                } else if (k > 0) {
                    dp[k] += 1LL * (N - cnt[i]) * (1 << i);
                } else {
                    dp[k] -= 1LL * cnt[i] * (1 << i);
                }
            }
            dp[k] += sum + 1LL * (N - cnt[x]) * C_x;
            if (k > 0) {
                sum += 1LL * (cnt[x] - (N - cnt[x])) * C_x;
                cnt[x] = N - cnt[x];
            }
        }
        for (int k = K; k >= 0; k--) {
            ans = (ans > dp[k] ? ans : dp[k]);
            if (k > 0) {
                dp[k] = (dp[k] > dp[k - 1] ? dp[k] : dp[k - 1]);
            }
        }
    }
    printf("%lld\n", ans);
}

int main() {
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
