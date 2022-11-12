class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0;
        int sum=0;
        int i=num1.size()-1;
        int j=num2.size()-1;
        string ans;
        while(i>=0 or j>=0 or carry!=0)
        { 
            if(i>=0)
            {
                sum+=num1[i]-'0';
                i--;
            }
            if(j>=0)
            {
                sum+=num2[j]-'0';
                j--;
            }
            sum+=carry;
            ans += (sum%10 + 48);
            carry=sum/10;
            sum=0;
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};


// string addStrings(string num1, string num2) {
//         int i,j,sum=0;
//         i = num1.size() - 1;
//         j = num2.size() - 1;
//         string ans;
//         while(i>=0 || j>=0 || sum != 0){
//             if(i>=0){
//                 sum += (num1[i] - 48);
//                 i--;
//             }
//             if(j>=0){
//                 sum += (num2[j] - 48);
//                 j--;
//             }
//             ans += (sum%10 + 48);
//             sum /= 10;
//         }
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }