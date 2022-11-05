class Solution {
public:
    void func(int op,int cl,int n,vector<string>&allPath,string path)
    {
        if(op==n and cl==n)
        {
            allPath.push_back(path);
            return;
        }
        if(op==n)
        {
            for(int i=cl;i<n;i++)
                path+=')';
            allPath.push_back(path);
            return ;
        }
        if(op==cl)
        {
            path+='(';
            func(op+1,cl,n,allPath,path);
        }
        if(cl<op)
        {
            path+='(';
            func(op+1,cl,n,allPath,path);
            path.pop_back();
            path+=')';
            func(op,cl+1,n,allPath,path);


        }
    }
    vector<string> generateParenthesis(int n) {
        int op=0;
        int cl=0;
        vector<string>allPath;
        string Path;
        func(op,cl,n,allPath,Path);
        return allPath;
    }
};