#include <stdio.h>

int main () {
	
	int maca;
	float custototal;
	
	printf("Digite quantas macas foram compradas:");
	scanf("%d", &maca);
	
	if (maca < 12) {
		custototal = maca * 1.30;
	} else {
		custototal = maca * 1;
	}
	
	printf("O custo total e: %.2f", custototal);
	
	return 0;
}


