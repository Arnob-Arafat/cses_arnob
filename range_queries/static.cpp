#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    vector<long long> prefix_sum(n+1);
    prefix_sum[0] = 0;

    for (int i = 0, j = 1; i < n; i++){
        cin >> v[i];
        prefix_sum[j] = prefix_sum[j-1] + v[i];
        j++;
    }

    int first, last;

    for (int i = 1; i <= q; i++){
        cin >> first >> last;

        cout << prefix_sum[last] - prefix_sum[first-1] << endl;
    }
}