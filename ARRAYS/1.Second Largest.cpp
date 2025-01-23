// T.C.:O(N)
int getSecondLargest(vector<int> &arr)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int num : arr)
    {
        if (num > largest)
        {
            secondLargest = largest; // Update second largest
            largest = num;           // Update largest
        }
        else if (num > secondLargest && num != largest)
        {
            secondLargest = num; // Update second largest
        }
    } // Handle the case where there might not be a second largest element
    if (secondLargest == INT_MIN)
    {
        return -1; // Or handle appropriately
    }
    return secondLargest;
}