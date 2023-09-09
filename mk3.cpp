#include <bits/stdc++.h>
using namespace std;

struct ClubMember {
    string name;
    string areaCode;
    string telephoneNumber;
};

int main() {
    int numMembers;

    cout << "Enter the number of club members: ";
    cin >> numMembers;

    ClubMember members[numMembers];

    for (int i = 0; i < numMembers; ++i) {
        cout << "Enter details for member " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin.ignore(); // Ignore the newline character from the previous input
        getline(cin, members[i].name);
        cout << "Area Code: ";
        cin >> members[i].areaCode;
        cout << "Telephone Number: ";
        cin >> members[i].telephoneNumber;
    }

    cout << "\nMembers by Area Code:" << endl;

    for (int i = 0; i < numMembers; ++i) {
        cout << "Area Code " << members[i].areaCode << ":" << endl;

        for (int j = 0; j < numMembers; ++j) {
            if (members[j].areaCode == members[i].areaCode) {
                cout << "Name: " << members[j].name
                          << ", Telephone Number: " << members[j].telephoneNumber << endl;
            }
        }

        cout << endl;
    }

    return 0;
}