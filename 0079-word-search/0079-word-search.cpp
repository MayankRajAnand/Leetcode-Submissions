class Solution {
public:
    bool func(int ind,int i,int j,vector<vector<char>>& board,string &word)
    {
        if(ind==word.size())
            return true;
        if(i<0 or j<0 or i>=board.size() or j>=board[0].size() or board[i][j]=='#' or word[ind]!=board[i][j])
            return false;
        char temp=board[i][j];
        board[i][j]='#';
        bool result =(func(ind+1,i+1,j,board,word) or func(ind+1,i-1,j,board,word) or func(ind+1,i,j+1,board,word) 
                        or func(ind+1,i,j-1,board,word));
        board[i][j]=temp;
        return result;
        
        
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<pair<int,int>>v;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(word[0]==board[i][j])
                    v.push_back({i,j});
            }
        }
        for(auto it:v)
        {
            if(func(0,it.first,it.second,board,word)==true)
                return true;
        }
        return false;
        
    }
};