/// week12-1.cpp 學習資料結構的 struct vs. class
#include <iostream>
#include <string> ///為了Cat貓的名字
using namespace std;
///struct NodeP{}; /// 都有分號結尾 C語言的結構
///class Cat {}; /// 之前幾周，都教過，更強大
struct Node{
    int val; ///value縮寫，這個Node裡面的值
};
class Cat{
public:
    string name; ///貓的名字
};
int main()
{
    Cat cat1;
    cat1.name="cattie";
    Node node;
    node.val=1;

}
