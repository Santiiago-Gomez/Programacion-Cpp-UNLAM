#include <iostream>

using namespace std;

int main()
{
    int h, m, s;
    int d;
    int hs, mi, sg;
    int todoseg;
    cin >> h >> m >> s;
    todoseg = h*3600+(m*60)+s;
    cin >> d;
    todoseg += d;
    hs = todoseg / 3600;
    mi = ((todoseg / 60)-(hs*60));
    sg = (todoseg-(mi*60)-(hs*3600));
    if (hs<24 and mi<60 and sg<60)
    {
    cout << hs << " " << mi << " " << sg << endl;
    }
    if (hs==24)
    {
    	hs=0;
    	cout << hs << " " << mi << " " << sg << endl;
	}
	if (hs>24)
	{
		hs = hs-24;
		cout << hs << " " << mi << " " << sg << endl;
	}
    return 0;
}
