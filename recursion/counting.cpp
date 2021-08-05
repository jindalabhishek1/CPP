#include <iostream>

using namespace std;

void count (int);

int main (void)
{
    int num;

    // Input the number
    cout << "Enter the number untill which you want to count: ";
    cin >> num;
    
    count (num);
}

void count (int num)
{
    //base condition
    if (num == 0)
    {
        return;
    }

    // printing from num towards 0
    cout << num << " ";
    
    // recursive function call
    count (num - 1);

    // printing from 0 towards num
    // cout << num << " ";
}