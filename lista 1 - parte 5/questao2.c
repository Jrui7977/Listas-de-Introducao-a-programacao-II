#include<stdio.h>
#include<stdlib.h>
int findprimos(int n){
	int x;
	if(n<10){
		return 0;
	}
	for(x = 2; x < n;x++){
		if(x%2 != 0 || x == 2){
			printf("\n[%d]",x);
		}
	}
}
int main(){
	findprimos(10);
}