//time : O(n*3) = O(n)

void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        
        d = d%n;
        
        reverse(arr.begin(),arr.end());
        
        reverse(arr.begin(),arr.begin()+(n-d));
        
        reverse(arr.begin()+(n-d),arr.end());
    }

//T.C. : O(N) ,S.C : O(N)

C:\Users\Meet\Downloads\

void rotateArr(vector<int>& arr, int d) {
    int n = arr.size();
    vector<int>temp;
    d = d%n;
    
    for(int i=d;i<n;i++){
        temp.push_back(arr[i]);
    }
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }
    arr=temp;

}