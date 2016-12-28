#include <bits/stdc++.h>
using namespace std;

// Sieve of Eratosthenes: finds all primes up to a limit

int main()
{
    vector<int> erat(100000, 1);
    erat[0] = erat[1] = 0;
    for(int i = 2; i * i < erat.size(); i++)
    {
        if(erat[i])
        {
            for(int j = i * i; j < erat.size(); j += i)
                erat[j] = 0;
        }
    }
    // print the primes in the range (0 - 100)
    for(int i = 0; i <= 100; i++)
    {
        if(erat[i])
            cout << i << endl;
    }    
    return 0;
}