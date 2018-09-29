#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	char bet[3] = {'W','T','L'};
	double res = 1, temp = 0, max = 0;
	int index = 0;
	for(int i = 0; i < 3; ++i){
		max = 0;
		for(int i = 0; i < 3; ++i){
			cin >> temp;
			if(temp > max){
				max = temp;
				index = i;
			}
		}
		res *= max;
		cout << bet[index] << " ";
	}
	res = (res * 0.65 - 1) * 2;
	printf("%.2f", res);
	return 0;
}
