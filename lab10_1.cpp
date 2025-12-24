#include <iostream>
using namespace std;

int main() {
    int count[5] = {}; // A,B,C,D,F
    char grade;
    int studentCount = 0;

    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;

    do {
        cout << "Student [" << studentCount + 1 << "]: ";
        cin >> grade;

        if (grade == '0') {
            break;
        }

        if (grade == 'A') {
            count[0]++;
            studentCount++;
        } else if (grade == 'B') {
            count[1]++;
            studentCount++;
        } else if (grade == 'C') {
            count[2]++;
            studentCount++;
        } else if (grade == 'D') {
            count[3]++;
            studentCount++;
        } else if (grade == 'F') {
            count[4]++;
            studentCount++;
        } else {
            cout << "Wrong input. Please input again." << endl;
            // studentCount ไม่เพิ่ม
        }

    } while (true);

    cout << "In total " << studentCount << " students." << endl;
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4];

    return 0;
}
