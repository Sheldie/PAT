#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int count = 0, num = 0;
	int index = 0;
	double base = 0;
	double a[1111] = {0};
	cin >> num;
	for(int i = 0; i < num; ++i){
		cin >> index >> base;
		a[index] += base;
	}
	cin >> num;
	for(int i = 0; i < num; ++i){
		cin >> index >> base;
		a[index] += base;
	}
	for(int i = 0; i < 1111; ++i){
		if(a[i] != 0)
			count++;
	}
	cout << count;
	if(count != 0)
		for(int i = 1110; i >= 0; --i){
			if(a[i] != 0){
				cout << " " << i;
				printf(" %.1f",a[i]);
			}
		}
	return 0;
}
