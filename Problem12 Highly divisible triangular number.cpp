#include <bits/stdc++.h>

using namespace std;

int noOfFactors(unsigned long int x)
{

    int count = 0;
    unsigned long int i;
    int flag = 1;
    for (i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            count += 2;
        }
        if (i * i == x)
            flag = 0;
    }
    if (!flag)
        count--;
    return count;
}

int main()
{
    unsigned long int x = 0;
    unsigned long int i = 1;

    bool flag = true;

    while (flag)
    {
        int count = noOfFactors(x);
        if (count > 500)
        {
            flag = false;
            cout << x;
        }
        else
        {
            x = x + i;
            i++;
        }
    }
}