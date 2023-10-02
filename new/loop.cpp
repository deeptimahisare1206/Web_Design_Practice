#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    for (int i = 100; i < 200; i++)
    {
        cout << "&#" + i;
        // cout << ";";
    }

    return 0;
}