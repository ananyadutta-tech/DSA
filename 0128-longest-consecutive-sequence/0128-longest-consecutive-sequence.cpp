class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if( n==0 ) return 0;
        int longest =0;
        int cnt=0;
        int x;
        unordered_set<int>st;
        for(int i=0; i< n; i++){
            st.insert(nums[i]);
        }
            for(auto it : st){
                if(st.find(it-1)== st.end()){
                     x= it;
                    cnt=1;
                }while(st.find(x+1)!= st.end()){
                    x=x+1;
                    cnt++;
                }
                longest= max(longest , cnt);
            }

        
        return longest;
    }
};