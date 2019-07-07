/*
    HACKER BLOCKS : CHECK PRIME
    @author: Luísa Maria Mesquita
*/

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(const int &n)
{
    for(int i = 2; i < sqrt(n); i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
}

int main()
{
    int n;

    cin >> n;

    if(n < 2 || n > 1000000000)
    {
        cout << "Outside valid range!" << endl;
        exit(1);
    }
    else
    {
        if(isPrime(n) == true)
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
              
    }

    return 0;
}