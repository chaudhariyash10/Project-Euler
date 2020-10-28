#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    int k = 50;
    int n;
    cin >> n;

    char num[n][k];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> num[i][j];
        }
    }

    int carry = 0;

    stack<int> st;

    for (int i = k - 1; i >= 0; i--)
    {
        int add = 0;
        for (int j = 0; j < n; j++)
        {
            add += (int)num[j][i] - 48;
        }
        add += carry;

        st.push(add % 10);
        carry = add / 10;
    }

    while (carry > 0)
    {
        st.push(carry % 10);
        carry = carry / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}
