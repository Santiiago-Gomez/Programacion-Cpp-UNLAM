#include <iostream>

using namespace std;

int main()
{
    int par = 0;
    int inpar = 0;
    int i;
    int N;
    cin >> N;
    for (i=1; i<=N; i++) {
            if (i%2==0) {
             par = par+i;
            }
            if (i%2!=0) {
                inpar = inpar+i;
            }
    }
    cout << (par)-(inpar) << endl;
    return 0;
}
