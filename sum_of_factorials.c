
#include <stdio.h>

int main() {
   
    int sum_fac=1;
    int sum_sigma=0;
    int n=5;
    int i;
    
    for(i=1;i<=2*n;i++){
        sum_fac = sum_fac*i;
        if(i%2==0){
            sum_sigma = sum_sigma+sum_fac;
            printf("i= %d sum_fac= %d  sum_sigma= %d\n",i,sum_fac,sum_sigma);
        }
        
    }
            printf("\n");
            printf("2!+4!+6!.. 2! den 2*%d!  toplami = %d \n",n,sum_sigma);
        
    return 0;
}
