class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int i;
        int index= -1;

        // find the pivot
        for( i= n-2; i>=0; i--){
            if( arr[i]<arr[i+1]){
                index= i;
                break;
            }
        }

        // if not exist
        if (index == -1) {
            reverse(arr.begin(), arr.end());
            return;
        }

        // find the next greater number
                for( i= n-1; i>index; i--){
                    if( arr[i]>arr[index]){
                        swap(arr[i], arr[index]);
                        break;
                    }
                }
        // reverse the remaining
        reverse(arr.begin()+index+1, arr.end());

    }
};