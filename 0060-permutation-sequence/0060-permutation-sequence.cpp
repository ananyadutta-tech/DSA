class Solution {
public:
    string getPermutation(int n, int k) {
        int fact= 1;
        vector<int> nums;
        
// storing the char from ind 1 to n into a ds
        for( int i=1; i<n; i++ ){
            fact= fact*i;
            nums.push_back(i);
        }nums.push_back(n);
        k= k-1; // k value 1step decr cz of index format
        string ans= ""; //declaring a container

        while(true){
            ans= ans+ to_string(nums[k/fact]);// to_string for storing the values into string

            nums.erase(nums.begin()+(k/fact));//erase the no. from the list to calculate others

            if( nums.size()== 0)//empty case
               break;

            k= k%fact; //k value for next step
            fact= fact/ nums.size();   // fact value for next step
        }
        return ans;

    }
};