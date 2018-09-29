#include <iostream>

using namespace std;

int main(){
	int col = 0;
	char a;
	cin >> col >> a;
	int row = (col % 2 == 0) ? (col / 2) : (col / 2 + 1);
	for(int i = 0; i < row; ++i){
		if(!i || i == row - 1){
			string temp(col,a);
			cout << temp;
			if(!i)
				cout << endl;
		}
		else{
			cout << a;
			for(int i = 0; i < col - 2; ++i)
				cout << " ";
			cout << a << endl;
		}
	}
	return 0;
}
