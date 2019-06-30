/*
    HACKER BLOCKS : REVISING QUADRATIC EQUATIONS 
    @author: Luísa Maria Mesquita
*/

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double a, b, c;

    cin >> a >> b >> c;

 
    if(a < -100 || b < -100 || c < -100 || a > 100 || b > 100 || c > 100)
    {
        cout << "Outside valid range" << endl;
    }

    else
    {
        double delta = (pow(b, 2)) - (4 * a * c);

        if(delta > 0)
        {
            double rootPositive = (-b + sqrt(delta)) / (2 * a);
            double rootNegative = (-b - sqrt(delta)) / (2 * a);

            cout << "Real and Distinct" << endl << rootNegative << " " << rootPositive << endl;
        }
        else if(delta == 0)
        {
            double rootPositive = (-b + sqrt(delta)) / (2 * a); 
            double rootNegative = (-b - sqrt(delta)) / (2 * a);

            cout << "Real and Equal" << endl << rootPositive << " " << rootNegative << endl; 
        }
        else // delta < 0
        {
            cout << "Imaginary" << endl;
        }
    }

}