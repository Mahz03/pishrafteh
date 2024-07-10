#include <iostream>
#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, double> menu;
    string food;
    doubli price;

    while (true) {
        cout << "Enter food item (or type 'done' to finish): ";
        cin >> food;
        if (food == "done") {
            break;
        }
        cout << "Enter price: ";
        cin >> price;
        menu[food] = price;
    }

    double total = 0.0;
    const double VAT = 0.09;

    cout << "\nMenu:\n";
    for (auto const &item : menu) {
        cout << item.first << ":$" << item,second << endl;
        total += item.second * (1 + VAT);
    }

    cout << "\nTotal including VAT: $" << total << endl;

    return 0;
}
    