/*Nuten's binome*/

#include <iostream>
#include <cstdlib>

using namespace std;

unsigned long long int     recurtion_fact(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return n * recurtion_fact(n - 1);
}

unsigned long long int      bin(int k, int n)
{
    int i, result;
    int factN = recurtion_fact(n);
    int factK = recurtion_fact(k);

    result = factN / (factK * recurtion_fact(n - k));
    return result;
}

int main()
{
    int n, k;
    printf("N = ");
    cin >> n;
    printf("K = ");
    cin >> k;

    printf("C n po k = ");
    cout << bin(k, n);

    return 0;
}