
//Simplest Solution

// #include <bits/stdc++.h>

// using namespace std;

// unsigned long int limit = 1000;

// unsigned long int getCollatzTerms(unsigned long int num)
// {
//     unsigned long int ans = 0;

//     while (num != 1)
//     {
//         if (num % 2 == 0)
//         {
//             num /= 2;
//         }
//         else
//         {
//             num = 3 * num + 1;
//         }
//         ans++;
//     }

//     return ans;
// }
// int main()
// {
//     unsigned long int term = 0;
//     unsigned long int biggestCollatz = 0;
//     for (unsigned long int i = 1; i < limit; i++)
//     {
//         unsigned long int temp = getCollatzTerms(i);

//         if (temp > biggestCollatz)
//         {
//             biggestCollatz = temp;
//             term = i;
//         }
//     }
//     cout << term << endl;
// }

//Optimisations

//1)Storing results of already computed values

//2)If n is even, then n → n/2 ⇒ Collatz(n) = Collatz(n/2) + 1. Therefore Collatz(2k) > Collatz(k) for all k,
// and we do not need to compute the chain for any k ≤ LIM IT /2. In this case, we do not need to compute
// the chain for any k below 500000.

//3) If n is odd then we can save a step by doing collatz(n) = collatz((3n + 1) / 2) + 2;

#include <bits/stdc++.h>

using namespace std;

unsigned long int limit = 20;

unordered_map<unsigned long int, unsigned long int> calculated;

unsigned long int getCollatzTerms(unsigned long int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (calculated[n])
    {
        return calculated[n];
    }
    else if (n % 2 == 0)
    {
        calculated[n] = 1 + getCollatzTerms(n / 2);
    }
    else
    {
        calculated[n] = 2 + getCollatzTerms((3 * n + 1) / 2);
    }
    return calculated[n];
}
int main()
{
    unsigned long int noOfTerms = 0;
    unsigned long int term = 0;
    for (unsigned long int i = limit / 2; i < limit; i++)
    {
        unsigned long int temp = getCollatzTerms(i);
        if (temp > noOfTerms)
        {
            noOfTerms = temp;
            term = i;
        }
    }
    cout << term << endl;

    cout << noOfTerms << endl;

    cout << getCollatzTerms(19);
}
