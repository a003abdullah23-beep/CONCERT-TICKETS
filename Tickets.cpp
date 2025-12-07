#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of tickets: ";
    cin >> N;

    int price;
    int totalRevenue = 0;
    int standardCount = 0;
    int vipCount = 0;

    for (int i = 0; i < N; i++) {
        cout << "Enter price of ticket " << i+1 << ": ";
        cin >> price;

        totalRevenue += price;

        if (price < 500) {
            cout << "Standard Ticket" << endl;
            standardCount++;
        } else {
            cout << "VIP Ticket" << endl;
            vipCount++;
        }
    }

    cout << "\nTotal Revenue: " << totalRevenue << endl;
    cout << "Standard Tickets: " << standardCount << endl;
    cout << "VIP Tickets: " << vipCount << endl;

    return 0;
}