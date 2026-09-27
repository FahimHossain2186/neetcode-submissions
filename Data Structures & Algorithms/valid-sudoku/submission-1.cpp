class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_map<int, int> rowMap;
        unordered_map<int, int> colMap;
        unordered_map<int, int> boxMap;


        for(int row = 0; row < 9; row++){
            
            for(int col = 0; col < 9; col++){

                char c = board[row][col];

                if(c != '.'){

                    int num = c - '0';
                    int boxIndex = (row / 3) * 3 + (col / 3);

                    if( rowMap[row * 10 + num] > 0 || 
                        colMap[col * 10 + num] > 0 || 
                        boxMap[boxIndex * 10 + num] > 0){
                        
                        return false;
                    }

                    rowMap[row * 10 + num]++;
                    colMap[col * 10 + num]++;
                    boxMap[boxIndex * 10 + num]++;
                }
            }
        }
        
        
        return true;  
    }
};
