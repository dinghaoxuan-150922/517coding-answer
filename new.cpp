#include <bits/stdc++.h>
using namespace std;
int c[1000][1000];
int main()
{	int n,m,r;
	cin >> n >> m >> r;
	int x,y;
	int num = 0;
	for (int i = 0;i < m;i++){
		cin >> x >> y;
		for (int j = 1;j < n;j++){
			for (int k = 1;k < n;k++){
				if (sqrt((abs(x-j))*(abs(x-j))+(abs(y-k))*(abs(y-k))) <= r){
					c[j][k]++;
				}
			}
		}
	}
	for (int i = 1;i < n;i++){
		for (int j = 1;j < n;j++){
			if (c[i][j] > 0){
				num++;
			}
		}
	}
	cout << num;
}