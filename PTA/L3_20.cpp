/*************************************************************************
	> File Name: L3_20.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 04 Apr 2021 10:46:10 PM CST
 ************************************************************************/
#include <bits/stdc++.h>
#define ll long long
#define LEN 1000005
using namespace std; 
ll dp[LEN][4];
int main()
{
	char a[LEN];
	scanf("%s",a+1);
	ll n = strlen(a+1);
	dp[0][0] = 1;
	
	for(ll i = 1; i<=n ;i++)
	{
		for(ll j=0; j<=3 ;j++)
		{
			if(dp[i-1][j]==0)continue;
			if(j+1<=3)dp[i][j+1]+=dp[i-1][j];
			dp[i][j]+=dp[i-1][j]; 
			for(ll k = i-1;k>=1&&i-k<=j;k--)
			{
				if(a[i] == a[k])
				{
				dp[i][j]-=dp[k-1][j-(i-k)];
				break;
				}
			}
		}
	}
		printf("%lld\n",dp[n][0]+dp[n][1]+dp[n][2]+dp[n][3]);
	return 0;
}
