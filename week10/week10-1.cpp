#include <iostream>
using namespace std;
int main()
{
	double h,w;
	cin >> h>>w;
	double ans = w/(h*h);
	cout << ans << "\n";
	if(ans<18.5) cout << "too thin";
	else if(ans<24) cout << "standard";
	else cout <<"too fat";

}