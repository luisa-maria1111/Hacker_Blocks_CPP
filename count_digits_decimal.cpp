/*
    HACKER BLOCKS : COUNT DIGITS (accepts decimal numbers)
    @author: Luísa Maria Mesquita
*/

#include <iostream>
#include <string>

using namespace std;

int countDigit(const string &num, const string &digit)
{
    int count = 0, remainder;
    string testingDigit;

    for(int i = 0; i <= num.length(); i++)
    {
        testingDigit = num.substr(i, 1);

        if(testingDigit == "0" || testingDigit == "1" || testingDigit == "2" || testingDigit == "3" || testingDigit == "4" || testingDigit == "5" || testingDigit == "6" || testingDigit == "7" || testingDigit == "8" || testingDigit == "9")
            if(testingDigit == digit)
                count = count + 1;

    }

    return count;

}

int main()
{
    string num, digit;

    cin >> num >> digit;

    if(stoi(num) < 0 || stoi(num) > 1000000000 || stoi(digit) < 0 || stoi(digit) > 9)
    {
        cout << "Outside valid range!" << endl;
        exit(1);
    }
    else
    {

        cout << countDigit(num, digit) << endl;
    }

    return 0;