#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double impedence (int *r, int *c, int *l, int *angFreq) {

	int w;

	w = (*angFreq * *l) - 1/(*angFreq * *c);

	return sqrt((*r * *r) + ((*angFreq * *l) - (w * w)));

}

int main () {
	int 	
}

