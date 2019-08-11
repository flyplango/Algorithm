//
// Created by jiaoml on 2019/8/11.
//

#include "Round_D_2019_1.h"
#include <iostream>
#include <set>

using namespace std;
const int maxa = 1024;
const int maxn = 1e5;
int T, N, Q, sum, p, v, ans;
int A[maxn + 5];
int ones[maxa + 5];
set<int> s;
set<int>::iterator it;

int getNumOne(int n) {
    int t = 0;
    while (n) {
        if (n & 1 == 1)t++;
        n = n >> 1;
    }
    return t;
}

int Round_D_2019_1::main() {
    for (int i = 0; i <= 1024; i++) {
        ones[i] = getNumOne(i);
    }
    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> N >> Q;
        s.clear();
        sum = 0;
        for (int j = 0; j < N; j++) {
            cin >> A[j];
            if (ones[A[j]] % 2 == 1) {
                s.insert(j);
                sum++;
            }
        }

        cout << "Case #" << i << ":";
        for (int k = 0; k < Q; k++) {
            cin >> p >> v;
            ans = 0;
            if (ones[A[p]] % 2 == 1) {
                it = s.lower_bound(p);
                s.erase(it);
                sum--;
            }
            A[p] = v;
            if (ones[A[p]] % 2 == 1) {
                s.insert(p);
                sum++;
            }
            if (sum % 2 == 0) {
                ans = N;
            } else {
                int idx1 = *(s.begin());
                idx1++;
                int idx2 = *(--s.end());
                ans = max(N - idx1, idx2);
            }
            cout << " " << ans;
        }
        cout << endl;
    }
}