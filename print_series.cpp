/*
    HACKER BLOCKS : PRINT SERIES
    @author: Luísa Maria Mesquita
*/

#include <iostream>

using namespace std;

void printSeries(const int &n1, const int &n2)
{
    int term, j = n1;
    for(int i = 0; j > 0; i++)
    {
        term = (3 * i) + 2;
        if((term % n2) != 0 && (n2 % term) != 0)
        {
            cout << term << endl;
            j = j - 1;

        }
    }
}

int main()
{
    int n1, n2;

    cin >> n1 >> n2;

    if(n1 > 100 || n1 < 0 || n2 > 100 || n2 < 0)
    {
        cout << "Outside valid range!" << endl;
        exit(1);
    }
    else
    {
        printSeries(n1,n2);
    }

    return 0;
}