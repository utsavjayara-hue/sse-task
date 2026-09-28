#include <iostream>
#include <vector>
using namespace std;

void insertion(vector<int> &input)
{
    for (int i = 1; i < size(input); i++)
    {
        int current = input[i];
        int k = i - 1;
        while (k >= 0 && input[k] > current)
        {
            input[k + 1] = input[k];
            k--;
        }
        input[k + 1] = current;
    }
}
int main()
{
    vector<int> test = {10, 2, 100, 69, 42, 67, 12};
    insertion(test);
    for (int x : test)
    {
        cout << x << " ";
    }
}
