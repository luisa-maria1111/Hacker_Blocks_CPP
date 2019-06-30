/*
    HACKER BLOCKS : PRATEEK LOVES CANDY 
    @author: Luísa Maria Mesquita
*/

#include <iostream>
#include <vector>

using namespace std;

#define MAX 10000000

vector<bool>isPrime (MAX,true); //creates a vector with 10000000 elements, each one with value true
unsigned int primeArray[5761459]; //creates an array with space for 5761459 elements

//Sieve of Eratosthenes (https://pt.wikipedia.org/wiki/Crivo_de_Erat%C3%B3stenes)
void generatePrimes()
{
    isPrime[0] = isPrime[1] = false; //the numbers 0 and 1 are not primes
    for(unsigned int i=2; i * i <= MAX; i++)
    {
        if(isPrime[i] == true)
        {
            for(unsigned int j=i; j * i <= MAX; j++) 
                isPrime[i*j] = false;
        }
    }

    unsigned int idx = 1;
    primeArray[0] = 2; //first prime element of array

    for(int i=3;i<=MAX;i+=2)
    {
        if(isPrime[i])
        {
            primeArray[idx++] = i;
        }     
    }

}

int main()
{
    generatePrimes();

    int n;
    vector <int> result;
    
    cin >> n;

    if(n > 10000)
    {
        cout << "Outside valid range!" << endl;
        exit(1);
    }
    else
    {
        while(n != 0)
        {
            int x;
            cin >> x;

            cout << primeArray[x-1] << endl; 

            n = n - 1;
        }

    }

    return 0;

}