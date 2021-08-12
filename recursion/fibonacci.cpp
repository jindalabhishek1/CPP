// code for printing fibonacci series using recursion

// Time complexity: 
// Space complexity: 

#include <iostream>

using namespace std;

int fibo (int);

int main(void)
{
    int num;

    // Input the number
    cout << "Enter which item in fibonnaci series you want: ";
    cin >> num;

    // calling the fibo function and storing it in a variable
    int fiboNumber = fibo(num);

    // print the output of fibo number
    cout << "The " << num << " item in fibonnaci series is " << fiboNumber << "\n";
}

int fibo (int num)
{
    // Base case
    if (num <= 1)
    {
        return num;
    }

    // making recursion calls
    return fibo (num - 1) + fibo (num - 2);
}