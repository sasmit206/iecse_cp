3847. Find Score Difference in a Game
class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int fps_sum=0;
        int sps_sum=0;
        bool f=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1){
                f=!f;
            }
            if(i%6==5){f=!f;}
            if(f){sps_sum+=nums[i];}
            else{fps_sum+=nums[i];}
            //cout<<nums[i]<<" , "<<fps_sum<<" , "<<sps_sum<<endl;
        }
        return fps_sum-sps_sum;
    }
};

3848. Check Digit Permutation
class Solution {
public:
    vector<int> factorials = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    bool isDigitorial(vector<int>v){
        int sum=0;
        int nos=0;
        for(int num:v){
            sum+=factorials[num];
            nos=nos*10+num;
        }
        if(nos==sum){return true;}
        return false;
    }
    bool isDigitorialPermutation(int n) {
        vector<int>v;
        while(n>0){
            int d=n%10;
            v.push_back(d);
            n/=10;
        }
        sort(v.begin(),v.end());
        do{
            if(v[0]==0){continue;}
            if(isDigitorial(v)){return true;}
        }while(next_permutation(v.begin(),v.end()));
        return false;
    }
};
