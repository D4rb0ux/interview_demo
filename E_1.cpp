#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.length() != s2.length())
        cout << 0;
    else {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        int n = s1.length(), flag = 1;
        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                flag = 0;
                break;
            }
        }
        cout << flag;
    }
    return 0;
}
