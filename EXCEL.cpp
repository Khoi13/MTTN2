#include <bits/stdc++.h>

using namespace std;
string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string numbers = "123456789";

void SUM(string inp, int arr[][26])
{
    int r1 = inp[4] - 64;
    int c1 = inp[5] - 48;
    bool flag = 0;
    if (inp[6] != ',')
    {
        flag = 1;
        c1 *= 10;
        c1 += (inp[6] - 48);
    }
    r1 -= 1;
    c1 -= 1;

    int el1 = arr[c1][r1];

    int r2 = inp[7 + flag] - 64;
    int c2 = inp[8 + flag] - 48;
    if (inp[9 + flag] != ')')
    {
        c2 *= 10;
        c2 += (inp[9 + flag] - 48);
    }

    r2 -= 1;
    c2 -= 1;
    int el2 = arr[c2][r2];

    cout << el1 + el2 << "\n";
}

void MAX(string inp, int arr[][26])
{
    int r1 = inp[4] - 64;
    int c1 = inp[5] - 48;
    bool flag = 0;
    if (inp[6] != ',')
    {
        flag = 1;
        c1 *= 10;
        c1 += (inp[6] - 48);
    }
    r1 -= 1;
    c1 -= 1;

    int el1 = arr[c1][r1];

    int r2 = inp[7 + flag] - 64;
    int c2 = inp[8 + flag] - 48;
    if (inp[9 + flag] != ')')
    {
        c2 *= 10;
        c2 += (inp[9 + flag] - 48);
    }

    r2 -= 1;
    c2 -= 1;
    int el2 = arr[c2][r2];
    cout << (el1 >= el2 ? el1 : el2) << "\n";
}
void solve(int arr[][26])
{
    string inp;

    getline(cin, inp);

    if (inp[0] == 'S')
    {
        SUM(inp, arr);
    }
    else if (inp[0] == 'M')
    {
        MAX(inp, arr);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int r, c, q;
    cin >> c >> r;
    int arr[c][26];

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cin >> arr[i][j];
        }
    }

    cin >> q;
    while (q + 1)
    {
        solve(arr);
        q--;
    }
}