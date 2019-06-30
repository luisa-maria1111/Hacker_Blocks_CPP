/*
    HACKER BLOCKS : DECIMAL TO OCTAL
    @author: Luísa Maria Mesquita
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n > 1000000000)
    {
        cout << "Outside valid range!" << endl;
        exit(1);
    }
    else
    {
        int x, resto;
        string result = " ";

        while(n >= 8)
        {
            x = n / 8;
            resto = n - (x * 8);
            result = to_string(resto) + result;
            n = x;

            if(n < 8)
            {
                result = to_string(n) + result;
            }
        }
 
        cout << result << endl; 
    }

    return 0;
}