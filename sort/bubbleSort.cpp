#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &list)
{
    for (int i = 0; i < size(list); i++)
    {
        bool swaped = false;
        for (int k = 0; k < size(list) - i - 1; k++)
        {
            if (list[k] > list[k + 1])
            {
                swap(list[k], list[k + 1]);
                swaped = true;
            }
        }
        if (!swaped)
        {
            break;
        }
    }
}

int main()
{
    vector<int> test = {1, 2, 90, 7, 30, 800, 100};
    bubbleSort(test);
    for (int x : test)
    {
        cout << endl
             << x << endl;
    }
}
