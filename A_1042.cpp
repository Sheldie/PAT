#include <iostream>
#include <string>
#define cardnum 54

using namespace std;

int main(){
	char card[5] = {'S','H','C','D','J'};
	int step = 0;
	cin >> step;
	int start[54],end[54],order[54];
	for(int i = 0; i < cardnum; ++i){
		cin >> order[i];
	}
	for(int i = 0; i < cardnum; ++i){
		start[i] = i + 1;
	}
	for(int i = 0; i < step; ++i){
		for(int i = 0; i < cardnum; ++i){
            end[order[i] - 1] = start[i];
        }
        for(int i = 0; i < cardnum; ++i){
        	start[i] = end[i];
        }
	}
	for(int i = 0; i < cardnum; ++i){
		int temp = end[i] - 1;
		switch(temp / 13){
			case 0: cout << 'S';break;
			case 1: cout << 'H';break;
			case 2: cout << 'C';break;
			case 3: cout << 'D';break;
			case 4: cout << 'J';break;
		}
		cout << (temp % 13 + 1);
		if(i != cardnum - 1)
			cout << " ";
	}
	return 0;
}
