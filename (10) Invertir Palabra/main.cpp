#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string palabra;
    cin >> palabra;
    reverse(palabra.begin(), palabra.end());
    cout << palabra << endl;
    return 0;
}
