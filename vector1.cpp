#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(NULL);
    int q;
    cin >> q;
    vector<int> A;
    A.reserve(q);
    for (int i = 0; i < q; ++i) {
        int type;
        cin >> type;

        if (type == 0) {
            int x;
            cin >> x;
            A.push_back(x);
        } else if (type == 1) {
            int p;
            cin >> p;
            cout << A[p] << "\n";
        } else if (type == 2) {
            if (!A.empty()) {
                A.pop_back();
            }
        }
    }

    return 0;
}
