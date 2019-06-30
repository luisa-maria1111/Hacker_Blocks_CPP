/*
    HACKER BLOCKS : SIMPLE INPUT 
    @author: Luísa Maria Mesquita
*/

#include <iostream>

using namespace std;

int main()
{
    int a;
    int sum = 0;

    while(sum >= 0 && cin >> a)
    {
        if(a < -1000 || a > 1000)
        {
            cout << "Outside valid range!" << endl;
            exit(1);
        }
        else
        {
            sum = sum + a;
            if(sum >= 0)
                cout << a << endl;
        }

    }

    return 0; 
}