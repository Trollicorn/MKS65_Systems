#include <stdio.h>

int sum_mult_3_and_5(){
	int sum = 0;
	for (int i = 0; i < 1000; ++i){
		if (i % 3 == 0 || i % 5 == 0){
			sum += i;
		}
	}
	return sum;
}


int main(){
	int sum = sum_mult_3_and_5();
	printf("%d\n", sum); //prints 233168
}
