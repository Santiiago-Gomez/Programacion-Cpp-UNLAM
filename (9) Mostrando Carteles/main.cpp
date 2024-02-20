#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    int a;
    string palabra;
    cin >> palabra;
    a=palabra.size();
    for (int i=0; i<=a+1; i++) {
        cout << "*";
    }
    cout << endl;
    cout << "*" << palabra << "*" <<endl;
    for (int j=0; j<=a+1; j++) {
        cout << "*";
    }
    return 0;
}
