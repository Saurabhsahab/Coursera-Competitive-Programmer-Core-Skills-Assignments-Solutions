//SAURABHSAHAB
#include <bits/stdc++.h>
using namespace std;

int toRank(char c) {
    switch (c) {
        case 'T': return 10;
        case 'J': return 11;
        case 'Q': return 12;
        case 'K': return 13;
        case 'A': return 14;
    }

    assert('2' <= c && c <= '9');
    return c - '0';
}

int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);

    vector<int> ranks;
    set<char> suits;
    for (int i = 0; i < 5; ++i) {
        string card;
        cin >> card;
        ranks.push_back(toRank(card[0]));
        suits.insert(card[1]);
    }

    if (suits.size() > 1) {
        cout << "NO\n";
        return 0;
    }

    sort(ranks.begin(), ranks.end());
    for (int i = 0; i < 4; ++i) {
        if (ranks[i] + 1 != ranks[i + 1]) {
            if (i < 3 || ranks[0] != 2 || ranks[4] != 14) {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";
    
    return 0;
}
