#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;


int main()
{
	const int n = 10;
	int a[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 100;
			cout << a[i][j] << '\t';
		}
	}
	cout << endl;
		int minSum = a[0][0];
    int m = 0;
    int d = 0;

    while (m < n - 1 || d < n - 1) 
	{
        if (m == n - 1) 
		{
            d++;
        } 
		else if (d == n - 1) 
		{
            m++;
        } 
		else 
		{
            if (a[m + 1][d] < a[m][d + 1]) 
			{
                m++;
            } else 
			{
                d++;
            }
        }
        minSum += a[m][d];
    }
	for (int i = 1; i < n; ++i) 
	{
		a[i][0] = a[i - 1][0] + a[i][0];
	}
	for (int j = 1; j < n; ++j) 
	{
		a[0][j] = a[0][j - 1] + a[0][j];
	}
	for (int i = 1; i < n; ++i) 
	{
		for (int j = 1; j < n; ++j) 
		{
			a[i][j] = max(a[i - 1][j], a[i][j - 1]) + a[i][j];
		}
	}
	cout << "Max: " << a[n - 1][n - 1] << endl;
    cout << "Min: " << minSum << endl;

    return 0;

}
