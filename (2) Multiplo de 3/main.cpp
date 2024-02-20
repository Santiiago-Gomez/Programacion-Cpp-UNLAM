#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int division = x/3;
    if(division*3 == x)
    {
        cout<< "Es multiplo" << endl;
    }
    else (division*3 != x);
        {
        cout<< "No es multiplo" << endl;
    }
    return 0;
}
