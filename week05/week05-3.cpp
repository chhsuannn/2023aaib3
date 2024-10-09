//week05-3.cpp UVA10222 Decode the Mad man
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char c;
	string s = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	while(scanf("%c",&c) == 1){
		c = tolower(c);
		if(c==' ' || c=='\n' ) cout << c;
		else{
			int i = s.find(c);
			cout << s[i-2];
		}
	}
}