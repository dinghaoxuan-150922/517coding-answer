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
		for (int j = x-2;j < x+2;j++){
			for (int k = y-2;k < y+2;k++){
				if (sqrt((abs(x-j))*(abs(x-j))+(abs(y-k))*(abs(y-k))) <= r){
					num++;
				}
			}
		}
	}
	cout << num;
}