#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long long n=nums.size();
       // s-sn= x
        long long Sn= (n*(n+1)) /2;
        //s2-s2n= y
        long long S2n= (n*(n+1)*(2*n+1))/6;
        long long S=0, S2=0;

        for( int i=0; i<n; i++){
            S= S+nums[i];
            S2 += (long long) nums[i]* nums[i];
        }

        long long val1= S-Sn;//x-y
        long long val2= S2-S2n;//(x+y)(x-y)
        val2= val2/ val1;
        long long x= (val1+val2)/2;
        long long y= x- val1;
        return {(int )x, (int )y};
        
    }
};
int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> ans = obj.findMissingRepeatingNumbers(nums);

    cout << "Repeating Number: " << ans[0] << endl;
    cout << "Missing Number: " << ans[1] << endl;

    return 0;
}