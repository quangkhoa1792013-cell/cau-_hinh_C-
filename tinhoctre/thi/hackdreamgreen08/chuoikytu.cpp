#include <bits/stdc++.h>
using namespace std;

// kiem tra xem string co 5 chu so ko
bool invalid(string s)
{
    if (s.length() != 5)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            if (s[i] < '0' || s[i] > '9')
            {
                return false;
            }
        }
    }
    return true;
}

// kiem tra xem co cung chu so ko
bool same(string s)
{
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] != s[0])
            return false;
    }
    return true;
}

// kiem tra xem co doi xung ko
bool pal(string s)
{
    int trai = 0;
    int phai = 4;

    while (trai < phai)
    {
        if (s[trai] != s[phai])
        {
            return false;
        }
        trai++;
        phai--;
    }

    return true;
}

// kiem tra xem tang nghiem ngat
bool up(string s)
{
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] >= s[i + 1])
        {
            return false;
        }
    }
    return true;
}

// kiem tra xem giam nghiem ngat
bool down(string s)
{
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] <= s[i + 1])
        {
            return false;
        }
    }
    return true;
}

// kiem tra xem co it nhat 3 chu so lien tiep nhau
bool triple(string s)
{
    for (int i = 0; i <= 2; i++)
    {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if (!invalid(s))
    {
        cout << "INVALID";
    }
    else if (same(s))
    {
        cout << "SAME";
    }
    else if (pal(s))
    {
        cout << "PAL";
    }
    else if (up(s))
    {
        cout << "UP";
    }
    else if (down(s))
    {
        cout << "DOWN";
    }
    else if (triple(s))
    {
        cout << "TRIPLE";
    }
    else
    {
        cout << "OK";
    }
    return 0;
}