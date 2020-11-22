//<<<<<<< HEAD
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int   n = 10, m = 10;
    int         i = 0, k = 0, y = 0, rev;

    srand(2);

    int** arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    printf("Matric before transphorm: \n");
    for (int i = 0; i < n; i++)
    {
        for (y = 0; y < m; y++)
        {
            arr[i][y] = rand() % 10;
            cout << arr[i][y] << " ";
        }
        cout << endl;
    }

    printf("Matric after transphorm: \n");
    for (i = 0; i < n / 2; i++)
    {
        for (y = 0; y < n / 2; y++)
        {
            k = arr[y][i];
            arr[i][y] = arr[n - 1 - i][n - 1 - y];
            arr[n - 1 - i][n - 1 - y] = k;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (y = 0; y < n; y++)
        {
            cout << arr[i][y] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
//=======
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int   n = 10, m = 10;
    int         i = 0, k = 0, y = 0, rev;

    srand(2);

    int** arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    printf("Matric before transphorm: \n");
    for (int i = 0; i < n; i++)
    {
        for (y = 0; y < m; y++)
        {
            arr[i][y] = rand() % 10;
            cout << arr[i][y] << " ";
        }
        cout << endl;
    }

    printf("Matric after transphorm: \n");
    for (i = 0; i < n / 2; i++)
    {
        for (y = 0; y < n / 2; y++)
        {
            k = arr[y][i];
            arr[i][y] = arr[n - 1 - i][n - 1 - y];
            arr[n - 1 - i][n - 1 - y] = k;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (y = 0; y < n; y++)
        {
            cout << arr[i][y] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
//>>>>>>> 7e0372612b9f49145c06a87586a1212202b0aa20
