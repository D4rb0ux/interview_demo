#include <string>
#include <iostream>

using namespace std;

void gen(int l_count, int r_count, int n, string ans) {
    if (l_count + r_count == 2*n) {
        cout << ans << "\n";
        return;
    }
    if (l_count < n)
        gen(l_count + 1, r_count, n, ans + '(');

    if (r_count < l_count)
        gen(l_count, r_count + 1, n, ans + ')');
}

int main()
{
    int n;
    cin >> n;
    gen(0, 0, n, "");
    return 0;
}
