/*
    HACKER BLOCKS : DELHI'S ODD EVEN
    @author: Luísa Maria Mesquita
*/

#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if(n > 10000)
    {
        cout << "Outside valid range!" << endl;
        exit(1);
    }
    else
    {
        while(n > 0)
        {
            int ni;
            cin >> ni;

            int niOdd = ni, niEven = ni;

            if(ni < 0 || ni > 1000000000)
            {
                cout << "Outside valid range!" << endl;
                exit(1);
            }
            else
            {
                int ramainderOdd, remainderEven, xOdd, xEven, sumOdd = 0, sumEven = 0;
                while(niOdd > 0)
                {
                    xOdd = niOdd / 10;
                    ramainderOdd = niOdd - (xOdd * 10);
                    if(ramainderOdd % 2 != 0)
                        sumOdd = sumOdd + ramainderOdd;
                    niOdd = xOdd;
                }
                if (sumOdd % 3 == 0)
                    cout << "Yes" << endl;
                else
                {
                    while(niEven > 0)
                    {
                        xEven = niEven / 10;
                        remainderEven = niEven - (xEven * 10);
                        if(remainderEven % 2 == 0)
                            sumEven = sumEven + remainderEven;
                        niEven = xEven;
                    }
                    if(sumEven % 4 == 0)
                        cout << "Yes" << endl;
                    else
                        cout << "No" << endl;
                }
            }

            n = n - 1;
        }
    }
}