/// week12-1.cpp �ǲ߸�Ƶ��c�� struct vs. class
#include <iostream>
#include <string> ///���FCat�ߪ��W�r
using namespace std;
///struct NodeP{}; /// ������������ C�y�������c
///class Cat {}; /// ���e�X�P�A���йL�A��j�j
struct Node{
    int val; ///value�Y�g�A�o��Node�̭�����
};
class Cat{
public:
    string name; ///�ߪ��W�r
};
int main()
{
    Cat cat1;
    cat1.name="cattie";
    Node node;
    node.val=1;

}
