#include <iostream>
#include <string>

using namespace std;

struct Student {
    
    string id;
    string nickname;
    string lineId;
    string phone;
};
int main() {
    const int SIZE = 5;
    Student students[SIZE]; 

    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        cout << "ID: ";
        cin >> students[i].id;
        cout << "Nickname: ";
        cin >> students[i].nickname;
        cout << "Line ID: ";
        cin >> students[i].lineId;
        cout << "Phone: ";
        cin >> students[i].phone;
        cout << endl;
    }
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        cout << students[i].id << "\t" << students[i].nickname << "\t" << students[i].lineId << "\t" << students[i].phone << "\n";
        cout << "----------------------\n";
    }

    return 0;
}