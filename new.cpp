#include <bits/stdc++.h>
using namespace std;
//每隔一秒降%98
int main()
{	
    int n;
    cin >> n;
    int ans = 0;
    for (int a = 0;a * a <= n;a++){
        for (int b = 0;b*b +a*a <= n;b++){
            for (int c = 0;c*c+b*b+a*a <= n;c++){
                for (int d = 0;d*d+c*c+b*b+a*a <= n;d++){
                    if (a*a+b*b+c*c+d*d == n){
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans;
}