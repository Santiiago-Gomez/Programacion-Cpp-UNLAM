#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int kilom;
    int centro;
    int N;
    cin >> N;
    cin >> centro;
    vector <int> distan(N);
    for (int i=0; i<N; i++)
    {
        cin >> distan[i];
    }
    sort(distan.begin(),distan.end());
    kilom = distan[N-1]-distan[0];
    if (centro<distan[0])
    {
        kilom = distan[N-1]-centro;
    }
    if (centro>distan[N-1])
    {
        kilom = centro-distan[0];
    }
    cout << kilom << endl;
    return 0;
}
