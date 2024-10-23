// week07-1.cpp 還沒寫完的 LeetCode學習計畫 Simulation 第3題
// 只做讀2D陣列、畫2D陣列
// LeetCode 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    void myDreamBoard(int board[3][3]){
        for(int i=0; i<3; i++){ // Step04: 印出模擬的棋盤內容
            for(int j=0; j<3; j++){
                cout << board[i][j] << ' ';
            }            
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; // Step03: C的陣列，裡面都放0代表沒有人放東西
        myDreamBoard(board);
        for(auto move : moves){ //Step01: C++進階迴圈
            int i = move[0], j = move[1]; // Step02: 取出陣列裡的值
            board[i][j] = 1;
            myDreamBoard(board);
        }   
        return "B"; //"A" or "B" or "Draw"平手
    }
};