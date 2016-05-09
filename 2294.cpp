//#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
double ans[300] = { 0 };
int main(){
	for (int i = 1; i < 300; i++) {
		double temp=0;
		for (int j = 2; j <= i; j++) {
			temp += (double)1 / j;
		}
		ans[i - 1] = temp;
	}
	//for (int i = 0; i < 300;i++) printf("%.3f ",ans[i]);
	double t;
	while (cin >> t&&t) {
		int cnt = 0;
		while (!(t>ans[cnt]&&t<ans[1+(cnt++)])) {}
		printf("%d card(s)\n",cnt);
	}
	//system("PAUSE");
	return 0;
}