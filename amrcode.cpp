#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // array size

    vector<int> arr(n);

    // input array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // find max
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }

    cout << mx << endl;

    return 0;
}
