#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        string s1, s2;
        cin >> s1 >> s2;

        int count = 0;
        int maxcount = 0;

        bool previousHand = false;

        for(int i = 0; i < n; i++) {

            bool currentHand = (s2.find(s1[i]) != string::npos);

            if(i == 0) {
                count = 1;
            }
            else if(currentHand == previousHand) {
                count++;
            }
            else {
                count = 1;
            }

            maxcount = max(maxcount, count);

            previousHand = currentHand;
        }

        cout << maxcount << endl;
    }

    return 0;
}