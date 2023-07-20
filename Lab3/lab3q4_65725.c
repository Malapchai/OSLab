#include <stdio.h>

int main(){
	int a = 0;
	float sum = 0;
	int cnt = 0;

	while(1){
		printf("Enter your number : ");
		scanf("%d", &a);
		if(a <= 0){
			break;
		}
		sum += a;
		cnt++;
	}

	printf("summation : %.0f\nAverage : %.2f\n" , sum , sum/cnt);
	return 0;
}
