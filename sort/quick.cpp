#include <iostream>
#include <vector>
using namespace std;

// time complextiy: O(nlogn)
// space compexity: O(1)
// but due to repeated function calls use extra memory

void quickSort(vector<int> &input, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int wall = low - 1;
    int pivot = low + (high - low) / 2;
    for (int i = low; i < high; i++)
    {
        if (input[pivot] > input[i])
        {
            wall++;
            swap(input[wall], input[i]);
        }
    }
    swap(input[pivot], input[wall + 1]);
    quickSort(input, low, wall);
    quickSort(input, wall + 2, high);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 8, 7, 4};
    quickSort(arr, 0, size(arr) - 1);
    for (int x : arr)
    {
        cout << x << ' ';
    }

    return 0;
}
