#include <iostream>
#include <vector>
using namespace std;
// time complexity:O(n^2)
// space complexity:O(1)
// unstable

void selectionSort(vector<int> &input)
{
    for (int i = 0; i < size(input) - 1; i++)
    {
        int minimum = i;

        for (int k = i; k < size(input); k++)
        {

            if (input[k] < input[minimum])
            {
                minimum = k;
            }
        }
        swap(input[i], input[minimum]);
    }
}

int main()
{
    vector<int> test = {1, 10, 9, 12, 11, 6, 67};
    selectionSort(test);
    for (int x : test)
    {
        cout << x << " ";
    }
}
