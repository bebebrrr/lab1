#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

int f(int x, int y, int z)
{
    return x * x + y * y == z * z;
}
int main()
{
    setlocale(LC_ALL, "");
    const int n = 100;
    int ar[n];
    int count = 0;
    int maxsum = 0;
    cout << "Полученный массив:" << endl;
    for (int i = 0; i < n; i++)
        ar[i] = rand() % 100;
    for (int i = 0; i < n; i++)
        cout << ar[i]<<" ";
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
            {
                if (f(ar[i], ar[j], ar[k]))
                    count++;
                int sum = ar[i] + ar[j] + ar[k];
                if (sum > maxsum)
                    maxsum = sum;
            }
    cout <<endl<< "Кол-во троек - " <<count << endl;
    cout << "Максимальная сумма кол-ва троек - " << maxsum << endl;
}