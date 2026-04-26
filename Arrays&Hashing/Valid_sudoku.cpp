class Solution {
public:
    bool validBox(int st_row,int st_col, int end_row,int end_col,vector<vector<char>>& board)
    {
        unordered_set<int>st;
        for(int i = st_row;i <= end_row;i++)
        {
            
            for(int j = st_col;j<=end_col;j++)
            {
                if(board[i][j] == '.')
                   continue;
                if(st.find(board[i][j]) != st.end())
                  return false;
                st.insert(board[i][j]);   
            }
        
        }
      return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        //validate row
        for(int row = 0;row < 9;row++)
        {
            unordered_set<int> st;
            for(int col = 0;col<9;col++)
            { 
                if(board[row][col] == '.')
                  continue;
                if(st.find(board[row][col]) != st.end())
                  return false;
                   
                st.insert(board[row][col]);
            }
          
        }
        //validate col
        for(int col = 0;col <9;col++)
        {
            unordered_set<int> st;
            for(int row = 0; row < 9;row++)
            {
                if(board[row][col] == '.')
                  continue;
                if(st.find(board[row][col]) != st.end())
                   return false;

                 st.insert(board[row][col]);
            }
           
        }
        // validate 3 x 3 boxes
        for(int sr = 0; sr < 9;sr += 3)
        {
            
            for(int sc = 0; sc < 9;sc+=3)
            {
                int end_row = sr + 2;
                int end_col = sc + 2;
                if(!validBox(sr,sc,end_row,end_col,board) )
                   return false;
            }
        }
        return true;

    }
};
