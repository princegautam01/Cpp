#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {

        int j = 1;

        while (j <= n)
        {
            cout << j << " ";

            j = j + 1;
        }
        i = i + 1;

        cout << endl;
    }

    return 0;
}
/*pattern

1 2 3
1 2 3
1 2 3



*/