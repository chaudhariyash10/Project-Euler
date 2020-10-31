#include <stdc++.h>

using namespace std;

int n = 20;



int main()
{
  long long unsigned  ans = 1;

   for(int i = 1; i <= n; i++)
   {
       ans = ans * (n + i) / i;
   }
    
   cout<<ans;
}