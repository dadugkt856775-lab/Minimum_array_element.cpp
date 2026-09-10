#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> votes;

    int n;
    cout << "Enter number of votes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string candidate;

        cout << "Vote for: ";
        cin >> candidate;

        votes[candidate]++;
    }

    string winner;
    int highest = 0;

    cout << "\n===== VOTE RESULT =====\n";

    for (auto &v : votes) {
        cout << v.first << " -> "
             << v.second << " votes\n";

        if (v.second > highest) {
            highest = v.second;
            winner = v.first;
        }
    }

    cout << "\nWinner: " << winner;
    cout << "\nVotes: " << highest;

    return 0;
}
