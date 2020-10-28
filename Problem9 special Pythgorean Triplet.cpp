#include <bits/stdc++.h>

using namespace std;

unsigned long int square(int x)
{
    return x * x;
}

int main()
{
    unsigned long int s = 1000;

    for (unsigned long int a = 3; a <= (s - 3) / 3; a++)
    {
        for (unsigned long int b = a + 1; b < (s - 1 - a) / 2; b++)
        {
            unsigned long int c = s - a - b;

            if(square(a) + square(b) == square(c))
            {
                cout << a << " " << b << " " << c << " "<<endl;
                cout << a * b * c << endl;
                break;
            }
        }
    }
}