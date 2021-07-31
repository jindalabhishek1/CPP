// https://www.geeksforgeeks.org/check-if-a-key-is-present-in-every-segment-of-size-k-in-an-array/
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int size, num, segment_size;
    cout << "Enter array size: ";
    cin >> size;

    // Define an array for size elements
    int array[size];
    // Define a flag
    int flag = 0;

    //input elements in array
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    // input segment_size
    cout << "Enter segment size: ";
    cin >> segment_size;

    //input number to be matched
    cout << "Enter the number to be matched: ";
    cin >> num;

    // looping through the array for finding num in segments
    for (int i = 0, j = 0; i < size; i++, j++)
    {
        if (j < segment_size)
        {
            if (array[i] == num)
            {
                flag = 1;
                j = segment_size - j;
                i += --j;
                j = -1;
            }
        }
        else
        {
            flag = 0;
            break;
        }
    }
    string output;

    if (flag == 0)
    {
        output = "No";
    }
    else if (flag == 1)
    {
        output = "Yes";
    }
    cout << output << '\n';
}