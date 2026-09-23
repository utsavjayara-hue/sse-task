#include <iostream>
#include <vector>

using namespace std;
int linearSearch(vector<int> &domain, int search)
{

    for (int i = 0; i < domain.size(); i++)
    {
        if (search == domain[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> test = {1, 2, 3, 4, 5, 6, 10};

    cout << linearSearch(test, 5);
}
