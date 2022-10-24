class Solution {
    bool helper_2(string s1,string s2){
        int hash[26] = {0};
        for(int i = 0;i<s1.length();i++){
            if(hash[s1[i]-'a'] > 0){
                return true;
            }
            hash[s1[i]-'a']++;
        }
        for(int i = 0;i<s2.length();i++){
            if(hash[s2[i]-'a']>0){
                return true;
            }
            hash[s2[i]-'a']++;
        }
        return false;
    }
    int helper_1(int i,string ans,vector<string>& arr){
        if(i == arr.size()){
            return ans.size();
        }
        if(helper_2(ans,arr[i])){
            return helper_1(i+1,ans,arr);
        }
        else{
            int len1 = helper_1(i+1,ans,arr);
            ans = ans + arr[i];
            int len2 = helper_1(i+1,ans,arr);
            return max(len1,len2);
        }
    }
public:
    int maxLength(vector<string>& arr) {
        string ans = "";
        return helper_1(0,ans,arr);
    }
};