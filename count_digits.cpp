/*
    HACKER BLOCKS : COUNT DIGITS (does not accept decimal numbers)
    @author: Luísa Maria Mesquita
*/

#include <iostream>

using namespace std;

int countDigit(int num, const int &digit)
{
    int count = 0, remainder;

    do
    {
        remainder = num % 10;
        num = num / 10;

        if(remainder == digit)
            count = count + 1;

    } while(num > 0);

    return count;

}

int main()
{
    int num, digit;

    cin >> num >> digit;

    if(num < 0 || num > 1000000000 || digit < 0 || digit > 9)
    {
        cout << "Outside valid range!" << endl;
        exit(1);
    }
    else
    {

        cout << countDigit(num, digit) << endl;
    }

    return 0;
}
