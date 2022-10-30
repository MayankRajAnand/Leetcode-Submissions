class NumArray {
public:
    vector<int>v;
    NumArray(vector<int>& nums) {
        v=nums;
    }
    
    int sumRange(int l, int r) {
        int sum=0;
        for(int i=l;i<=r;i++)
        {
            sum+=v[i];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */