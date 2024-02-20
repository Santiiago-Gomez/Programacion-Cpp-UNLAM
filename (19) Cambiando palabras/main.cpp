#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
	string palabra;
	int N;
	cin >> palabra;
	cin >> N;
	palabra.replace(N-1, 1, "X");
	cout << palabra;
	return 0;
}
