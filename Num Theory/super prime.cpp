#include <bits/stdc++.h>
using namespace std;
bool Prime(int n){
    if(n == 0 || n == 1) return false;

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}

bool Superprime(int val)
{
    int count = 0;
    for (int i = 2; i <= val/2; i++)
    {
        if(Prime(i) && val%i == 0) count++;
    }
    if(count == 2) return true;
    return false;

}

int main()
{
    
    int n;
    cin >> n;

    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (Superprime(i))
        {
            count++;
        }
    }
    cout << count;

    return 0;
}
