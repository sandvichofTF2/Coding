#include <bits/stdc++.h>

using namespace std;
int n,k;
string s;

int F(int i)
{
    if (i <= 1) return 1;
    else if (i == 2) return 2;
    else return F(i-1) + F(i-2);
}

int main()
{
    freopen("NHIPHAN2.INP","r",stdin);
    freopen("NHIPHAN2.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> s >> k;
    int vt = 0;
    for (int i = n-1; i>= 0; i--)
    {
        if (s[i] == '0')
        {
            vt+= F(n-i);
        }
        else
        {
            vt+= F(n-i-1);
        }
    }
    string S = s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (k <= F(n-i)) S[i] = '0';
            else
            {
                S[i] = '1';
                k = k - F(n-i);
            }
        }
        else
        {
            if (k <= F(n-i-1)) S[i] = '0';
            else
            {
                S[i] = '1';
                k = k - F(n-i-1);
            }
        }
    }
    cout << vt+1 << endl;
    cout << S;
    return 0;
}