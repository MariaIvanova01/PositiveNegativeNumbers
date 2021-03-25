#include <iostream>

using namespace std;

int main()
{
    float m;
    cout << " m = ";
    cin >> m;

    if (m == 0.0)
    {
        cout << " You entered 0 " << endl;
    }
    else if (m > 0.0)
    {
        cout << m << " is positive number " << endl;
    }
    else if (m < 0.0)
    {
        cout << m << " is negative " << endl;
    }

    system("PAUSE");
    return 0;
}
