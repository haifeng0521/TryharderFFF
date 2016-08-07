#include <stdio.h>
#define MAX 100

void reverse( int *num, int m, int n );

int main(void){
	int num[MAX];
	int  n, m;
	scanf("%d %d", &n ,&m);
	m %= n;
	int i;
	
	for( i = 0;i < n; i++)
		scanf("%d",&num[i]);
	reverse( num, 0 ,n-m-1);
	reverse( num, n-m, n-1);
	reverse( num, 0, n-1);
	for( i = 0;i < n;i++ )
		printf("%d%s", num[i], (i-n+1?" ":"\n"));
			
		return 0;
}

void reverse( int *num, int m, int n){
	int temp, i;
	for( i = m;i <= ( n+m )/2 ; i++ ){
		temp = num[i];
		num[i] = num[m+n-i];
		num[n+m-i] = temp;
	}
}
