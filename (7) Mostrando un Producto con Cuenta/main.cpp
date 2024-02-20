#include <iostream>

using namespace std;

int main()
{
    int A, B;
    int total;
    cin >> A >> B;
    if (A<10 and B<10) {
        cout << " " << " " << " " << A << endl;
        cout << "x" << " " << " " << B << endl;
    }
    if (A>=10 and B<10) {
        cout << " " << " " << A << endl;
        cout << "x" << " " << " " << B << endl;
    }
    if (A<10 and B>=10) {
        cout << " " << " " << " " << A << endl;
        cout << "x" << " " << B << endl;
    }
    if (A>=10 and B>=10) {
        cout << " " << " " << A << endl;
        cout << "x" << " " << B << endl;
    }
    cout << "----" << endl;
    total = A*B;
    if (total<10) {
        cout << " " << " " << " " << total << endl;
    }
    if (total>=10 and total<=99) {
        cout << " " << " " << total << endl;
    }
    if (total>=100 and total<=999) {
        cout << " " << total << endl;
    }
    if (total>=1000 and total<10000) {
        cout << total << endl;
    }
    return 0;
}
