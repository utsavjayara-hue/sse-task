#include <iostream>
#include <vector>

using namespace std;

// time complexity :O(log(n))
//  space complexity : O(1)
int binarySearch(vector<int> &domain, int search)
{
    int start{}, end = domain.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (domain[mid] == search)
        {
            return mid;
        }
        if (domain[mid] > search)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> test = {1, 2, 3, 4, 5, 6, 10};

    cout << binarySearch(test, 7);
}
