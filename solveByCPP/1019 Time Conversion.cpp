#include <iostream>
using namespace std;
int main()
{
    int sec;
    cin >> sec;

    int min, hour;
    min = sec / 60;
    sec = sec - (min * 60);
    hour = min / 60;
    min = min - (hour * 60);

    cout << hour << ":" << min << ":" << sec << endl;

    return 0;
}