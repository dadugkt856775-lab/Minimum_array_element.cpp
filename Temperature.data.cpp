#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<double> temperature;
    int n;

    cout << "Enter number of days: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        double t;
        cout << "Day " << i + 1 << ": ";
        cin >> t;

        temperature.push_back(t);
    }

    double sum = 0;

    for (double t : temperature)
        sum += t;

    auto minTemp = min_element(
        temperature.begin(),
        temperature.end()
    );

    auto maxTemp = max_element(
        temperature.begin(),
        temperature.end()
    );

    cout << "\n===== TEMPERATURE REPORT =====\n";
    cout << "Minimum: " << *minTemp << "°C\n";
    cout << "Maximum: " << *maxTemp << "°C\n";
    cout << "Average: " << sum / n << "°C\n";

    return 0;
}
