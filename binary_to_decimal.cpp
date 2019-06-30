/*
    HACKER BLOCKS : BINARY TO DECIMAL 
    @author: Luísa Maria Mesquita
*/

#include <iostream>
#include <cmath>

using namespace std;

int convertToDecimal(int n)
{
    int result = 0, remainder, term, x;

    for(int i = 0; n > 0; i++)
    {
        x = n / 10;
        remainder = n - (x * 10);
        term = remainder * pow(2, i);
        result = result + term;
        n = x;

    }

    return result;
}

int main()
{
    int n;

    cin >> n;

    if (n < 0 || n > 1000000000)
    {
        cout << "Outside valid range!" << endl;
        exit(1);
    }
    else
    {
        cout << convertToDecimal(n) << endl;
        
    }

}