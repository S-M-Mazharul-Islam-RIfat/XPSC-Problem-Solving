#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
#define sz(yo) (ll)yo.size()

void solve() {
   ll n;
   cin >> n;
   vector<ll> p(n + 1), a(n + 1);
   map<ll, ll> pos;
   for (ll i = 1;i <= n;i++) {
      cin >> p[i];
      a[i] = p[i];
      pos[p[i]] = i;
   }

   ll ans1 = 0, ans2 = 0;
   for (ll i = 1;i <= n;i++) {
      if (p[i] == i || p[p[i]] == i) {
         continue;
      }
      ll p1 = pos[i], p2 = p[i];
      swap(p[p1], p[p2]);
      ans1++;
   }

   for (ll i = 1;i <= n;i++) {
      p[i] = a[i];
   }

   for (ll i = 1;i <= n;i++) {
      if (p[i] == i || p[p[i]] == i) {
         continue;
      }
      ll p1 = pos[i], p2 = p[i];
      swap(p[p1], p[p2]);
      ans1++;
   }

   cout << min(ans1, ans2) << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   ll t;
   t = 1;
   cin >> t;
   for (ll cs = 1; cs <= t; cs++) {
      // cout << "Case " << cs << ": ";
      solve();
   }
   return 0;
}