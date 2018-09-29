#include <iostream>

using namespace std;

int main(){
	string str;
	cin >> str;
	int row = 0, col = str.length(), temp = 0;
	while(1){
		temp = str.length() + 2 - 2 * row;
		if(row > temp)
			break;
		++row;
		col = temp;
	}
	--row;
	int left = 0, right = str.length() - 1;
	for(int i = 0; i < row - 1; ++i){
		cout << str[left];
		for(int j = 0; j < col - 2; ++j)
			cout << " ";
		cout << str[right] << endl;
		++left,--right;
	}
	for(int i = left; i <= right; ++i){
		cout << str[i];
	}
	return 0;
}
