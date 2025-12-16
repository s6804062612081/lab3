#include <stdio.h>
int main() {
	int s;
	scanf("%d",&s);
	if (s>100){
		printf("error score");
	} else if (s<0) {
	    printf("error score");
	} else if (s>=85) {
	    printf("A");
	} else if (s>=75) {
	    printf("B, +%d = A",85-s);
	} else if (s>=68) {
	    printf("C, +%d = A",85-s);
	} else if (s>=60) {
	    printf("D, +%d = A",85-s);
	} else if (s<60) {
	    printf("F, +%d = A",85-s);
	} else {
	    printf("error score");
	}
}