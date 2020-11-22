//Iteration and recurtion factarial

#include <iostream>
#include <cstdlib>

using namespace std;

int     iteration_fatc(int n)
{
    int fact = 1, i;

    for (i = 1; i <= n; i++)
    {
        if (n < 0)
        {
            return 0;
        }
        else
        {
            fact *= i;
        }
    }
    return fact;
}
int     recurtion_fact(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return n * recurtion_fact(n - 1);
}
int     main()
{
    int n;
    printf("N = ");
    cin >> n;

    if (n < 0)
    {
        printf("Error: n < 0");
    }

    printf("Iteration factorial(n): \n");
    cout << iteration_fatc(n) << endl;

    printf("Recurtion factorial(n): \n");
    cout << recurtion_fact(n) << endl;
    
    return 0;
}