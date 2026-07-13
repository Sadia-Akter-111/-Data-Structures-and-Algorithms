#include <iostream>
using namespace std;

int Binary_search(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int n, target, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target: ";
    cin >> target;

    int result = Binary_search(arr, 0, n - 1, target);

    if (result != -1)
    {
        cout << "Found at index " << result;
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}
