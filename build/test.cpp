#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pp pair<int, int>
#define ppl pair<ll, ll>
int sum(int a, int b)
{
    int res = a + b;
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << sum(a, b) << endl;
    }
    return 0;
}