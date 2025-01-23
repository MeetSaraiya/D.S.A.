// User function template for C++
class Solution
{
public:
    void pushZerosToEnd(vector<int> &arr)
    {
        // Meet
        int j = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != 0)
            {
                arr[j] = arr[i];
                j++;
            }
        }
        while (j < arr.size())
        {
            arr[j++] = 0;
        }
    }
};

or
    INT j = 0;
for (int i = 0; i < arr.size(); i++)
{
    if (arr[i] != 0)
    {
        swap(arr[i], arr[j++]);
    }
}