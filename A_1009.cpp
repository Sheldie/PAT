#include <iostream>
#include <cstdio>

using namespace std;

struct Poly
{
	double cof = 0;
	int exp = 0;
}poly[1001];

int main(){
	int a_num = 0, b_num = 0;
	double cof = 0;
	int exp = 0;
	double res[2001] = {0};
	int count = 0;
	cin >> a_num;
	for(int i = 0; i < a_num; ++i){
		cin >> poly[i].exp >> poly[i].cof;
	}
	cin >> b_num;
	for(int i = 0; i < b_num; ++i){
		cin >> exp >> cof;
		for(int j = 0; j < a_num; ++j){
			res[exp + poly[j].exp] += poly[j].cof * cof;
		}
	}
	for(int i = 0; i < 2001; ++i){
		if(res[i] != 0)
			count++;
	}
	cout << count;
	for(int i = 2000; i >= 0; --i){
		if(res[i] != 0){
			printf(" %d %.1f", i, res[i]);
		}
	}
	return 0;
}
