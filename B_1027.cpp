#include <iostream>

using namespace std;

int main(){
	int n = 0, cnt = 1, temp = 1, res = 0;
	char a;
	cin >> n >> a;
	while(1){
		temp = 2 * cnt * cnt - 1;
		if(temp > n){
			--cnt;
			break;
		}
		res = temp;
		++cnt;
	}
	for(int i = cnt; i > 0; --i){
		for(int k = 0; k < cnt - i; ++k)
			cout << " ";
		for(int j = 0; j < 2 * i - 1; ++j)
			cout << a;
		cout << endl;
	}
	for(int i = 2; i <= cnt; ++i){
		for(int k = 0; k < cnt - i; ++k)
			cout << " ";
		for(int j = 0; j < 2 * i - 1; ++j)
			cout << a;
		cout << endl;
	}
	cout << n - res;
	return 0;
}
