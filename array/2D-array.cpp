#include <iostream>
using namespace std;

namespace first
{

    void b()
    {
        cout << "aniket";
    }
}
namespace second
{
    void b()
    {
        cout << "pradeep";
    }
}

int main()
{
    first::b();
    return 0;
}