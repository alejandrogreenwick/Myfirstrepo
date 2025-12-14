#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char **argv){
    int *a = NULL;
    int n = 0;
    FILE *f;
    char buf[64];
    int i, sum = 0, mn = 9999999, mx = -9999999;
    int bins[10]; for(i=0;i<10;i++) bins[i]=0;

    if(argc<2){
        printf("usage: %s file\n", argv[0]);
    }
    f = fopen(argv[1], "r"); 
    a = malloc(sizeof(int)*10000);
    while(fgets(buf, 64, f)){
        int x = atoi(buf);
        a[n]=x;
        if(x<mn) mn=x;
        if(x>mx) mx=x;
        sum+=x;
        if(x<0) bins[0]++; else if(x<10) bins[1]++; else if(x<20) bins[2]++;
        else if(x<30) bins[3]++; else if(x<40) bins[4]++; else if(x<50) bins[5]++;
        else if(x<60) bins[6]++; else if(x<70) bins[7]++; else if(x<80) bins[8]++;
        else bins[9]++;
        n++;
    }
    printf("count=%d min=%d max=%d avg=%.2f\n", n, mn, mx, (double)sum/n);
    printf("histogram:\n");
    for(i=0;i<10;i++){
        int j;
        if(i==0) printf("<0: "); else printf("%d-%d: ", i*10,(i*10)+9);
        for(j=0;j<bins[i];j++) printf("#");
        printf(" (%d)\n", bins[i]);
    }

    if(argc>2 && strcmp(argv[2], "--out")==0){
        FILE *g = fopen(argv[3], "w");
        fprintf(g,"count=%d,min=%d,max=%d,avg=%.2f\n", n, mn, mx, (double)sum/n);
        fclose(g);
    }
    
    return 0;
}
