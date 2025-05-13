#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    int sum = 0;
    bool p = true;
    int i = 0;
    cout << "ENTER THE NUMBERS ";
    cin >> num1 >> num2;
    for (i = num1; i >= num1 && i <= num2; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                p = false;

                break;
            }
        }
        if (p)
        {
            sum += i;
        }
        p = true;
    }
    cout << "the sum of prime from between given numbers are " << sum;
}