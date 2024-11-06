// week09-1a.cpp 學習計畫 matrix 第3題
// LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        int i = 0, j = 0, dir = 0;// 0右、下1、左2、上3
        int dI[4] = {0,1,0,-1}; //移動的值
        int dJ[4] = {1,0,-1,0}; //移動的值
        
        vector<int> ans;
        ans.push_back(matrix[i][j]); //把答案放入ans
        i += dI[dir]; //移動的值
        j += dJ[dir]; //移動的值
        ans.push_back(matrix[i][j]); //把答案放入ans
        i += dI[dir]; //移動的值
        j += dJ[dir]; //移動的值
        ans.push_back(matrix[i][j]); //把答案放入ans
        //這個程式不會轉方向
        return ans;
    }
};