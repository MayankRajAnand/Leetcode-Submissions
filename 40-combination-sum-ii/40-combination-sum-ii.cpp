class Solution {
public:
    void solve(vector<int>& candidates, int target ,vector<vector<int>>&result ,vector<int>&output , int index){
    
    if(target==0){
        result.push_back(output);
        return;
    }
    
    if(target<0 ||index>=candidates.size()){
        return;
    }
    
    for(int i = index ; i<candidates.size() ; i++){
        if(i>index && candidates[i]==candidates[i-1]){
            continue;
        }
        if(candidates[i]>target){
            break;
        }
        output.push_back(candidates[i]);
        solve(candidates , target-candidates[i] , result , output , i+1); 
        output.pop_back(); 
    }
    
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin() , candidates.end());
        vector<vector<int>>result ;
        vector<int>output ;
        int index =0;
        solve(candidates , target , result , output , index);

        return result;
    }
};