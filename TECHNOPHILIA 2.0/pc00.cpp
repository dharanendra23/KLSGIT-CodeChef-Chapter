#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    std::ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> cnt(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > arr[i])
                {
                    break;
                }
                if (arr[i] == arr[j])
                {
                    cnt[j]++;
                    cnt[i]++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << cnt[i] << " ";
        }
        cout << endl;
    }
    return 0;
}