#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<string, vector<string>> routes;

    int n;
    cout << "Enter number of routes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string route, location;

        cout << "\nRoute name: ";
        cin >> route;

        cout << "Enter 3 locations:\n";

        for (int j = 0; j < 3; j++) {
            cin >> location;
            routes[route].push_back(location);
        }
    }

    cout << "\n===== DELIVERY ROUTES =====\n";

    for (auto &r : routes) {
        cout << r.first << ": ";

        for (string location : r.second)
            cout << location << " ";

        cout << endl;
    }

    return 0;
}
