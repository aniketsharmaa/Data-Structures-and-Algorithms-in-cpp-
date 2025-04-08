#include <iostream>
using namespace std;

void memoryLeak()
{
    for (int i = 0; i < 1000000000000000000; i++)
    {
        cout << "Hey/n";
        int *a = new int(10);
    }
}

int main()
{

    memoryLeak();
    return 0;
}