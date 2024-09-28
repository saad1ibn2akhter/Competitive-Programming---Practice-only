// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int mostFrequentElement(const vector<int> &arr)
{
    unordered_map<int, int> freqMap;

    for (int element : arr)
    {
        freqMap[element]++;
    }

    // for(int i = 0;i<arr.size();i++){
    //     freqMap[i] = arr[i];
    // }

    int mostFrequent = 0;
    int maxFrequency = 0;

    for (const auto &entry : freqMap)
    {
        if (entry.second > maxFrequency)
        {
            mostFrequent = entry.first;
            maxFrequency = entry.second;
        }
    }

    return mostFrequent;
}

int mostFrequent(const vector<int> &arr)
{
    unordered_map<int, int> frequencyMap;
    for (int e : arr)
    {
        frequencyMap[e]++;
    }
    int mostFrequent = 0;
    int maxFrequency = 0;

    for (const auto &entry : frequencyMap)
    {
        if (entry.second > maxFrequency)
        {
            mostFrequent = entry.first;
            maxFrequency = entry.second;
        }
    }

    return mostFrequent;
}

int main()
{
    std::vector<int> arr = {1, 3, 2, 1, 4, 1, 2, 3, 3};
    int result = mostFrequent(arr);
    std::cout << "The most frequent element is: " << result << std::endl;
    return 0;
}
