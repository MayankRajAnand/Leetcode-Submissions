class Solution {
public:
    int compareVersion(string version1, string version2)
{
    int i = 0; 
    int j = 0;
    
    int n1=version1.size();
    int n2=version2.size();

    string num1 = "";
    string num2 = "";
    while(i<n1 || j<n2)
    {
        while(i<n1 && version1[i]!='.'){
            num1=num1+version1[i];
            i++;
        }
        
        while(j<n2 && version2[j]!='.'){
            num2=num2+version2[j];
            j++;
        }
        
        if(num1.size()==0)num1='0';
        if(num2.size()==0)num2='0';
        
        // cout<<num1<<" "<<num2<<endl;
        if(stoi(num1)>stoi(num2)) return 1;
        else if(stoi(num1) < stoi(num2)) return -1;

        num1 = "";
        num2 = "";
        i++;
        j++;
    } 

    return 0;
}
};