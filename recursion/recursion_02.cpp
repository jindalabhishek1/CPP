/*
Question:
    input = 12, output = One Two
    input = 431, output = Four Three One
*/

#include <iostream>
// #include <string>

using namespace std;

string eng_repr(int &);

void divide(int);

int main(void)
{
    // declaring a number
    int num;

    // input a number
    cout << "Enter a number: ";
    cin >> num;

    // calling the divide function
    divide (num);
}

void divide(int num)
{
    //base case
    if (num == 0)
        return;

    int remainder = num % 10;

    divide(num / 10);

    cout << eng_repr(remainder) << " ";
}

string eng_repr (int& num)
{
    string output;
    if      (num == 1)       { output = "One";   }
    else if (num == 2)       { output = "Two";   }
    else if (num == 3)       { output = "Three"; }
    else if (num == 4)       { output = "Four";  }
    else if (num == 5)       { output = "Five";  }
    else if (num == 6)       { output = "Six";   }
    else if (num == 7)       { output = "Seven"; }
    else if (num == 8)       { output = "Eight"; }
    else if (num == 9)       { output = "Nine";  }
    else if (num == 0)       { output = "Zero";  }
    else                     { output = "Inval"; }
    return output;
}