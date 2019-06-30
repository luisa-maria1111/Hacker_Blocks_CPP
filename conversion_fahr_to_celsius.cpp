/*
    HACKER BLOCKS : CONVERSION (FAHRENHEIT TO CELSIUS)
    @author: Luísa Maria Mesquita
*/

#include <iostream>

using namespace std;

int main()
{
    int min, max, step;

    cin >> min >> max >> step;

    if(min < 0 || min > 100 || max < min || max > 500 || step < 0)
    {
        cout << "Outside valid range!" << endl;
        exit(1);
    }
    else
    {
        int i = min, c;
        
        while(i <= max)
        {
            c = (5. / 9.) * (i - 32.);

            cout << i << " " << c << endl;

            i = i + step;
        }
    }

    return 0;
}
