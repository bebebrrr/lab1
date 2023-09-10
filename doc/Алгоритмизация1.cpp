

#include <iostream>
using namespace std;

int F(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n > 1)
    {
        return F(n - 1) * n;
    }
}
int main()
{
    cout << F(5);
}
