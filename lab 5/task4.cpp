#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize array
    int arr[5] = {1, 2, 3, 5, 8};

    // Find Maximum and Minimum
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    // Display Sorted Array
    cout << "Sorted Array: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Display Maximum and Minimum
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}
