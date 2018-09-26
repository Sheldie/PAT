#include <iostream>

using namespace std;

int ctoi(char c){
	if(c == 'B')
		return 0;
	else if(c == 'C')
		return 1;
	else if(c == 'J')
		return 2;
}

int main(){
	char m[3] = {'B','C','J'};
	int A_win = 0 , B_win = 0, tie = 0;
	int n = 0;
	char a,b;
	int count_A[3] = {0};
	int count_B[3] = {0};
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> a >> b;
		int t1 = ctoi(a);
		int t2 = ctoi(b);
		if((t1 + 1) % 3 == t2){
			A_win++;
			count_A[t1]++;
		}
		else if(t1 == t2){
			tie++;
		}
		else{
			B_win++;
			count_B[t2]++;
		}
	}
	int max_A = 0, max_B = 0;
	int temp_A = 0, temp_B = 0;
	for(int i = 0; i < 3; ++i){
		temp_A = count_A[i] > max_A ? i : temp_A;
		temp_B = count_B[i] > max_B ? i : temp_B;
		max_A = count_A[i] > max_A ? count_A[i] : max_A;
		max_B = count_B[i] > max_B ? count_B[i] : max_B;
	}
	cout << A_win << " " << tie << " " << B_win << endl;
	cout << B_win << " " << tie << " " << A_win << endl;
	cout << m[temp_A] << " " << m[temp_B] << endl;
	return 0;
}