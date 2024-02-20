#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    while (2020 <= a <= 3000) {
    if (a%4==0 and a%100!=0 or a%400==0) {
        cout << "SI" << endl;
        break;
    }
    else
        cout << "NO" << endl;
        break;
    }
    return 0;
}
