
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int tot_d1=0, tot_d2=0;
	int iter;
    scanf("%d",&n);
    iter = n;
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          scanf("%d",&a[a_i][a_j]);
       }
    }
    
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          if (a_i == a_j) {
            tot_d1 += a[a_i][a_j];
          }
       }
    }
	printf("%d\n", tot_d1);

    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
			if (a_j == iter-1) {
            	tot_d2 += a[a_i][iter-1];
				//printf("------$$%d  %d\n", a[a_i][iter-1], tot_d2);
				iter--;
			}
       }
    }

    printf("Difference :%d\n", tot_d2-tot_d1);
    
    return 0;
}

