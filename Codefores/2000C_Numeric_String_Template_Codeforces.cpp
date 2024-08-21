#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

bool mt(const vector<int> &vec, const string &str)
{
    if (vec.size() != str.size())
        return false;

    unordered_map<int, char> itc;
    unordered_map<char, int> cti;

    for (int i = 0; i < vec.size(); i++)
    {
        int veci = vec[i];
        char stri = str[i];

        if (itc.count(veci))
        {
            if (itc[veci] != stri)
                return false;
        }
        else
        {
            itc[veci] = stri;
        }

        if (cti.count(stri))
        {
            if (cti[stri] != veci)
                return false;
        }
        else
        {
            cti[stri] = veci;
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> vec(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> vec[i];
        }

        int t2;
        cin >> t2;

        while (t2--)
        {
            string str;
            cin >> str;

            if (mt(vec, str))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}