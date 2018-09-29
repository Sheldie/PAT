#include <iostream>
#include <cstdio>

using namespace std;

struct record
{
	string id;
	int inh,inm,ins;
	int outh,outm,outs;
}temp,first,last;

bool in_earlier(record a,record b){
	if(a.inh != b.inh)
		return a.inh < b.inh;
	else if(a.inm != b.inm)
		return a.inm < b.inm;
	else
		return a.ins <= b.ins;
}

bool out_later(record a,record b){
	if(a.outh != b.outh)
		return a.outh > b.outh;
	else if(a.outm != b.outm)
		return a.outm > b.outm;
	else
		return a.outs > b.outs;
}

void init(){
	first.inh = 24, first.inm = 60, first.ins = 60;
	last.outh = 0, last.outm = 0, last.outs = 0;
}

int main(){
	init();
	int num = 0;
	cin >> num;
	for(int i = 0; i < num; ++i){
		cin >> temp.id;
		scanf("%d:%d:%d %d:%d:%d", &temp.inh, &temp.inm, &temp.ins, &temp.outh, &temp.outm, &temp.outs);
		if(in_earlier(temp,first))
			first = temp;
		if(out_later(temp,last))
			last = temp;
	}
	cout << first.id << " " << last.id;
	return 0;
}