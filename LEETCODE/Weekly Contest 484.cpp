3803. Count Residue Prefixes
class Solution {
public:
    int residuePrefixes(string s) {
        int c=0;
        set<char>pre;
        for(int i=0;i<s.size();i++){
            pre.insert(s[i]);
            if((i+1)%3==pre.size()){c++;}
        }
        
        
        return c;
    }
};


3804. Number of Centered Subarrays 
class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            unordered_map<long long,int>freq;
            long long sum=0;
            for(int r=i;r<nums.size();r++){
                sum+=nums[r];
                freq[nums[r]]=1;
                if(freq.count(sum)){c++;}
                
            }
        }
        return c;
    }
};
