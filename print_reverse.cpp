/*
    HACKER BLOCKS : PRINT REVERSE 
    @author: Luísa Maria Mesquita
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, x, remainder;
    string result;

    cin >> n;

    if (n < 0 || n > 1000000000)
    {
        cout << "Outside valid range!" << endl;
        exit(1);
    }
    else
    {
        while(n > 0)
        {
            x = n/10;

            remainder = n - (x * 10);

            result = result + to_string(remainder);

            n = x;
        }
        cout << result << endl;

    }

}
