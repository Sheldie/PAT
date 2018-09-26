#include <iostream>

using namespace std;

int main(){
	int n[101];
	int num = 0, x = 0;
	cin >> num >> x;
	x = x % num;
	for(int i = 0; i < num; ++i){
		cin >> n[i];
	}
	if(x == 0){
		for(int i = 0; i < num; ++i){
			cout << n[i];
			if(i != num - 1)
                cout << " ";
		}
	}
	else{
		for(int i = num - x; i < num; ++i){
			cout << n[i] << " ";
		}
		for(int i = 0; i < num - x; ++i){
			cout << n[i];
			if(i != num - x - 1)
				cout << " ";
		}
	}
	return 0;
}
