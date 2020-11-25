//Iteration and recurtion double factarial

#include <iostream>
#include <cstdlib>

using namespace std;

unsigned long long int     iteration_fatc(long int n)
{
    int fact = 1, i;

    if(n % 2 == 0)
    {
       for(int i = 2; i <= n; i += 2)
       {
           fact *= i;
       }
    }
    else
    {
        for(int i = 1; i <= n; i += 2)
       {
           fact *= i;
       }
    }
    return fact;
}
unsigned long long int     recurtion_fact(long int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    return n * recurtion_fact(n - 2);
}
int     main()
{
    long int n;
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