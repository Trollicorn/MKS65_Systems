#include <stdio.h>

int sum_square_difference(){
	int sum = 0;
	int square = 0;
	for (int i = 1; i < 101; ++i){
		sum += i;
		square += i * i;
	}
	return sum * sum - square;
}


int main(){
	int difference = sum_square_difference();
	printf("%d\n", difference); //prints 333300
}