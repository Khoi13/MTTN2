#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // setprecision(4);
    long double x1, x2, v1, v2;

    cin >> x1 >> x2 >> v1 >> v2;

    long double sumLength = abs(x1 - x2);
    long double sumSpeed = abs(v1 - v2);

    if (sumSpeed == 0)
    {
        cout << -1;
        return 0;
    }

    if (x1 < x2)
    {
        if (v1 < v2)
        {
            cout << -1;
            return 0;
        }
    }
    else if (x1 > x2)
    {
        if (v1 > v2)
        {
            cout << -1;
            return 0;
        }
    }

    cout << fixed << setprecision(4) << sumLength / sumSpeed;
}