#include <iostream>
#include <cstdio>

using namespace std;

struct Person
{
	string name;
	int y = 0, m = 9, d = 6;
}oldest,youngest,lt,rt,temp;

void init(){
	youngest.y = rt.y = 2014;
	oldest.y = lt.y = 1814;
}

bool older(Person a,Person b){
	if(a.y != b.y)
		return a.y > b.y;
	else if(a.m != b.m)
		return a.m > b.m;
	else
		return a.d >= b.d;
}

bool younger(Person a,Person b){
	if(a.y != b.y)
		return a.y < b.y;
	else if(a.m != b.m)
		return a.m < b.m;
	else
		return a.d <= b.d;
}

int main(){
	init();
	int num = 0, count = 0;
	cin >> num;
	for(int i = 0; i < num; ++i){
        cin >> temp.name;
		scanf("%d/%d/%d", &temp.y, &temp.m, &temp.d);
		if(younger(temp,rt) && older(temp,lt)){
			++count;
			if(younger(temp,youngest))
				youngest = temp;
			if(older(temp,oldest))
				oldest = temp;
		}
	}
	if(!count)
		cout << "0";
	else
		cout << count << " " << youngest.name << " " << oldest.name;
	return 0;
}
