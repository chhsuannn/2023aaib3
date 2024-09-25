/// week03-5.cpp  學習計畫第5題
/// LeetCode 459. Repeated Substring Pattern
class Solution {
public:
    // abcabcabc
    // abcabcabcabcabcabc
    // bcabcabcabcabcab  找有沒有 abcabcabc
    bool repeatedSubstringPattern(string s) {
        //這題我沒什麼頭緒,所以看了 Solutions 裡別人的解答。
        //很多人使用 s + s 在減掉頭尾
        //然後把 s 拿去比對, 如果有出現, 表示是 repeated 的 patern
        //猜測原理是, 因為 s + s 在減掉頭尾, 造成前半、後半都有照顧到
        //有反例嗎? 不會有的。因為 s 很長, 如果能比到, 就把前半、後半...
        string s2 = s + s;
        int N = s2.length();
        return s2.substr(1, N-2).find(s) != string::npos; //npos對應:沒有這個位置、很大很大
        //substr()切字串 左1 右扣1 (本來是0...N-1 現在變成 1...N-2)
    }
};