#include <bits/stdc++.h>
using namespace std;
//b[i]位置村存a[i]
int main()
{
    string a,b,c,ans = "";
    cin >> a >> b >> c;
    int mp[256] = {0};
    int used[256] = {0};
    for (int i =  0;i < a.size();i++){
        if (mp[b[i]] != 0&&mp[b[i]] != a[i]){
            cout << '@';
            //cout << 1;
            return 0;
        }
        if (mp[b[i]] == 0&&used[a[i]]){
            cout << '@';
            //cout << 2;
            return 0;
        }
        mp[b[i]] = a[i];
        used[a[i]] = 1;
    }
    int cnt = 0,ret = 0;
    for (int i = 'A';i <= 'Z';i++){
        if (used[i] != 0){
            cnt++;
        }
        else{
            ret = i;
        }
    }
    if (cnt == 25){
        for (int i = 'A';i <= 'Z';i++){
            if (mp[i] == 0){
                mp[i] = ret;
                break;
            }
        }
    }
    for (int i = 0;i < c.size();i++){
        ans += mp[c[i]];
        if (mp[c[i]] == 0){
            cout << '@';
            //cout << 3;
            return 0;
        }
    }
    cout << ans;
}
/*
string a;
	cin >> a;*/
/*
if (a[i] == 'A'){
			cout << num[0]
		}*/