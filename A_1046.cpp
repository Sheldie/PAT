#include <iostream>
#include <algorithm>

#define MAXN 100001

using namespace std;

int main(){
	int num = 0,sum = 0;
	cin >> num;
	int n[MAXN],dis[MAXN]={0};
	for(int i = 0; i < num; ++i){
		cin >> n[i];
		sum += n[i];
		dis[i + 1] = sum;
	}
	cin >> num;
	int start = 0, end = 0;
	for(int i = 0; i < num; ++i){
		cin >> start >> end;
		int temp = start;
		start = start < end ? start : end;
		end = temp < end ? end : temp;
		int t = dis[end - 1] - dis[start - 1];
		cout << min(t, sum - t) << endl;
	}
	return 0;
}
