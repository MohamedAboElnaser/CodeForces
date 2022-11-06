#include <iostream>

using namespace std;

bool is_prime(long long n)
{
    if (n == 2)
        return true;
    if (n % 2 == 0 || n < 2)
        return false;
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie();
    long long n;
    cin >> n;
    if (is_prime(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}