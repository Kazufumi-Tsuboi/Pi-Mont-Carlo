
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int niter=10000;
    srand((unsigned)time(NULL));
    int n_in=0;
    /* Main Loop*/
    for(int iter=1;iter<niter+1;iter++){
        double x=(double)rand()/RAND_MAX;
        double y=(double)rand()/RAND_MAX;

        if(x*x+y*y<1e0)
            n_in=n_in+1;
        printf("%d %.10f\n",iter,4*(double)n_in/iter);}
}