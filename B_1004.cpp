#include <iostream>

using namespace std;

struct Student{
	string name;
	string id;
	int score = 0;
}temp,res_max,res_min;

int main(){
	int num;
	cin >> num;
	for(int i = 0; i < num; ++i){
		cin >> temp.name >> temp.id >> temp.score;
		if(!i){
			res_max = temp;
			res_min = temp;
		}
		else if(temp.score > res_max.score)
			res_max = temp;
		else if(temp.score < res_min.score)
			res_min = temp;
	}
	cout << res_max.name << " " << res_max.id << endl;
	cout << res_min.name << " " << res_min.id;
	return 0;
}