/// week03-1.cpp �Ҹ��D��: ���c�Ⱥ�,���O�L�k����
/// �]�� range-based for �j�� �����b C++11 (2011����)�~���
/// �p�G�ϥ� C++98 (1988�~��C++) �|�L�k���T�sĶ�B����|�X���B�j��X����
/// COdeBlocks 17.12 �� Setting-Compiler �Ĳ�2�� -std=c++11
#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(char c : s){
        if(c!='2') cout<<c;
	}
	return 0;
}
