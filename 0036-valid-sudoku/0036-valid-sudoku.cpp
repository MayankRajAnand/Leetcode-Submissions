class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            unordered_set<int>st;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.'){
                    if(st.find(board[i][j]-'0')!=st.end())
                        return false;
                    st.insert(board[i][j]-'0');
                }
            }
            st.clear();
        }
        
        for(int i=0;i<9;i++)
        {
            unordered_set<int>st;
            for(int j=0;j<9;j++)
            {
                if(board[j][i]!='.'){
                    if(st.find(board[j][i]-'0')!=st.end())
                        return false;
                    st.insert(board[j][i]-'0');
                }
            }
            st.clear();
        }
        
        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                unordered_set<int>st;
                for(int k=0;k<9;k++)
                {
                    if(board[3*(i/3) + k/3][3*(j/3) +k%3]!='.'){
                        if(st.find(board[3*(i/3) + k/3][3*(j/3) +k%3] -'0')!=st.end())
                            return false;
                        st.insert(board[3*(i/3) + k/3][3*(j/3) +k%3] -'0');
                    }
                }
                st.clear();
            }
        }
        return true;
    }
};