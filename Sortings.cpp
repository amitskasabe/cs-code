#include <bits/stdc++.h>
using namespace std;
class Sortings
{
public:
    vector<int> arr;
    vector<int> BubbleSort()
    {
        // Bubble sort code
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[i] > arr[j])
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
        return arr;
    }
    vector<int> InsertionSort()
    {
        // insertion sort code
        for(int i=0; i<arr.size(); i++)
        {
            int j=i;
            while( j > 0 && arr[j]<arr[j-1])
            {
                int swap = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = swap;
                j--;
            }
        }
        return arr;
    }
    vector<int> SelectionSort()
    {
        // selection sort code
    }
};
class Searching
{
public:
    vector<int> arr;
    int target = 2;
    int linearSearch()
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    Searching obj;
    obj.arr = {1, 2, 3, 4, 5};
    int result = obj.linearSearch();
    cout << result << endl;
    Sortings sort;
    sort.arr = {4, 2, 1, 3};
    vector<int> res = sort.BubbleSort();
    for (auto i : res)
    {
        cout << i << " "<< endl;
    }
    Sortings sort1;
    sort.arr = {5,3,2,4,1};
    vector<int> res1 = sort.InsertionSort();
    for (auto i : res1)
    {
        cout << i << " "<<endl;
    }

    return 0;
}