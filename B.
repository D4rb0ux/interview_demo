#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> bin(n);
    for (int i = 0; i < n; i++)
        cin >> bin[i];
    if (n == 1) {
        if (bin[0] == 0)
            cout << 0;
        else
            cout << 1;
    } else {
        int curr = 0, max = 0;
        for (int i = 0; i < n; i++) {
            if (bin[i] == 1) {
                curr++;
            } else {
                if (curr > max)
                    max = curr;
                curr = 0;
            }
        }
        if (curr > max)
            max = curr;
        cout << max;
    }
    return 0;
}
