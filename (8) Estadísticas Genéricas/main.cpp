#include <iostream>

using namespace std;

int main()
{
    int N;
    int B;
    int i;
    int total=0;
    int mayor= 0, menor=1000;
	cin >> N;
	for (i=0; i<N; i++) {
		cin >> B;
		total= (total+B);
		if (B> mayor) {
			mayor= B;
		}
		if (B< menor) {
			menor= B;
		}
	}
	cout << mayor << endl;
	cout << menor << endl;
	cout << total << endl;
    return 0;
}
