#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#pragma GCC optimize(3)
using namespace std;
int n,m,a,b;
inline int function1(int x)//处理f[x] 
{
	int cnt=max(n,m);
	int flag=floor(n*x/m);
	flag=flag*flag;
	cnt+=flag*x;
//	cout<<cnt<<" ";
	return cnt;
}
inline int function2(int x)//处理人数 
{
	int sum=0;
	for(int i=1;i<=x;i++)
	{
		int cnt=floor(x/i);
		sum+=cnt;
	}
	return function1(x)+sum;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin>>n>>m>>a>>b;
	int x=function2(m);
	int y=function2(n);
	int cnt=__gcd(x,y);
	x/=cnt;
	y/=cnt;
	cout<<((x/y>a/b)?"rush through customs\n":"death\n");
	cout<<x<<"/"<<y;
	return 0;
}
