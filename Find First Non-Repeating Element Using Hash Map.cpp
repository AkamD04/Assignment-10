#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int nums[] = {4, 5, 1, 2, 0, 4};
    int n = 6;

    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }

    for(int i = 0; i < n; i++)
    {
        if(mp[nums[i]] == 1)
        {
            cout << nums[i];
            return 0;
        }
    }

    cout << "No non-repeating element";

    return 0;
}