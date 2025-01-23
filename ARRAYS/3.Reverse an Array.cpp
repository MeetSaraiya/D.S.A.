void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size()-1;
        int i = 0;
        while(i<n){
            swap(arr[i++],arr[n--]);
        }
    }