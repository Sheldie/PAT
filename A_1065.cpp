#include <iostream>

using namespace std;

int main(){
	int num = 0;
	long long int a = 0, b = 0, c = 0;
	long long res = 0;
	cin >> num;
	for(int i = 0; i < num; ++i){
		cin >> a >> b >> c;
		res = a + b;
		bool flag = false;
		if(a > 0 && b > 0 && res < 0)
			flag = true;
		else if(a < 0 && b < 0 && res >= 0)
			flag = false;
		else if(res > c)
			flag = true;
		else
			flag = false;
		cout << "Case #" << (i + 1) << ": ";
		if(flag)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}
