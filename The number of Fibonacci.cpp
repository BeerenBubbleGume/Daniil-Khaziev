/*The number of Fibonacci*/

#include <iostream>
#include <cstdlib>

using namespace std;

int     fibonacci_rec(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n >= 2)
    {
        return fibonacci_rec(n - 2) + fibonacci_rec(n - 1);
    }
}
int     fibonacci_it(int n)
{
    int fib = 1, i;
    int y = 0;

    for (i = 0; i < n; i++)
    {
        fib += y;
        y = fib - y;
    }
    return y;
}
int     main()
{
    int n;
    printf("N = ");
    cin >> n;
  
    printf("Fibonacci recurrent:\n");
    cout << fibonacci_rec(n) << endl;

    printf("Fibonacci iteration: \n");
    cout << fibonacci_it(n) << endl;

    return 0;
}