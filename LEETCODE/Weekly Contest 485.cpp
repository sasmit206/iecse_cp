1. 
class Solution {
public:
    int vowelConsonantScore(string s) {
        int v=0,c=0;
        for(auto it:s){
            if(it=='a'||it=='e'||it=='o'||it=='i'||it=='u'){v++;}
            else if(tolower(it)>=97&&tolower(it)<=122){c++;}
        }
        if(c==0){return 0;}
        return v/c;
    }
};
