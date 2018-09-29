#include <iostream>

using namespace std;

struct Student
{
	string name;
	char gender;
	string id;
	int score = 0;
}temp,worstboy,bestgirl;

void init(){
	worstboy.score = 101;
	bestgirl.score = -1;
}

int main(){
	init();
	int num = 0;
	bool na = false;
	cin >> num;

	for(int i = 0; i < num; ++i){
		cin >> temp.name >> temp.gender >> temp.id >> temp.score;
		if(temp.gender == 'M'){
			if(temp.score < worstboy.score)
				worstboy = temp;
		}
		else{
			if(temp.score > bestgirl.score)
				bestgirl = temp;
		}
	}

	if(bestgirl.score == -1){
		cout << "Absent" << endl;
		na = true;
	}
	else
		cout << bestgirl.name << " " << bestgirl.id << endl;
	
	if(worstboy.score == 101){
		cout << "Absent" << endl;
		na = true;
	}
	else
		cout << worstboy.name << " " << worstboy.id << endl;

	if(na)
		cout << "NA";
	else
		cout << bestgirl.score - worstboy.score;

	return 0;
}