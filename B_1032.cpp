#include <iostream>

using namespace std;

int main(){
	int school[100001] = {0};
	int num = 0, id = 0, pt = 0;
	int res = 0;
	cin >> num;
	for(int i = 0; i < num; ++i){
		cin >> id >> pt;
		school[id] += pt;
	}
	for(int i = 0; i < 100001; ++i){
		res = school[i] > school[res] ? i : res;
	}
	cout << res << " " << school[res];
	return 0;
}
