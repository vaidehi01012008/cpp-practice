#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key)
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int a[100], n, key, result;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    result = binarySearch(a, n, key);

    if (result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at position " << result + 1;
    }

    return 0;
}