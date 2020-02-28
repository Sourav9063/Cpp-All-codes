#include<bits/stdc++.h>
using namespace std;

int main()
{   int a;
	scanf("%d",&a);
	if((a%10==1||a%10==7||a%10==9||a>9&&a<30||a/10==1||a/10==7||a/10==9)&&a!=12)
		printf("NO");
	else
		printf("YES");
	return 0;
}
