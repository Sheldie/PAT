#include <iostream>

using namespace std;

int main(){
	bool flag = false;
	int base = 0, index = 0;
	int nbase = 0, nindex = 0;
	while(cin >> base >> index){
		if(index == 0)
			break;
		if(flag)
			cout << " ";
		nbase = base * index;
		nindex = index - 1;
		cout << nbase << " " << nindex;
		flag = true;
	}
	if(!flag)
		cout << "0 0";
	return 0;
}
