#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int n, num;
    cin >> n;
    vector<int> unique;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (i == 0) {
            unique.push_back(num);
        }
        else {
            if (num != unique[unique.size() - 1])
                unique.push_back(num);
        }
    }
    for (int i = 0; i < unique.size(); i++)
        cout << unique[i] << "\n";
    return 0;
}
