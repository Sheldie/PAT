#include <iostream>
#define max_n 1001

using namespace std;

struct Student{
	string id;
	int examSeat = 0;
}student[max_n];

int main(){
	int num = 0;
	cin >> num;
	string temp;
	int examSeat = 0, testSeat = 0;
	for(int i = 0; i < num; ++i){
		cin >> temp >> testSeat >> examSeat;
		student[testSeat].id = temp;
		student[testSeat].examSeat = examSeat;
	}
	cin >> num;
	for(int i = 0; i < num; ++i){
		cin >> testSeat;
		cout << student[testSeat].id << " " << student[testSeat].examSeat << endl;
	}
	return 0;
}
