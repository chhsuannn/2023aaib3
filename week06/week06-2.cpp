/// week06-2.cpp CPE UVA 10107 - What is the Median?
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a;
    int now;
    while( cin >> now ){
        a.push_back(now);
        sort(a.begin(), a.end());
        int N = a.size();
        if(N%2==1) cout << a[N/2] << "\n";
        else cout << (a[N/2-1] + a[N/2])/2 << "\n";
    } ///在小黑裡輸入時，結束全部輸入 Ctrl-z 加 Enter
}
