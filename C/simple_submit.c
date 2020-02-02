#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void str(char *ps){
     strcpy(ps,"sudo git commit -m \"");
   // printf("%ld\n",strlen(ps));
   // puts(ps);

    char *ptemp=(char *)malloc(100*sizeof(char));

    int i=0;
    while(1)if((ptemp[i++]=getchar())=='.')break;
    printf("Remarks:%s",ptemp);
    ptemp[i]='\"';
    // printf("i=%d\n",i);
    // printf("%ld\n",strlen(ptemp));
    // puts(ptemp);

    ps=(char *)realloc(ps,sizeof(char)*strlen(ptemp));
   // printf("%ld\n",strlen(ps));

    strcat(ps,ptemp);
   // puts(ps);
    //free(ptemp);
}

void main(){
    
    char *ps=(char *)malloc(sizeof(char)*20);
    system("sudo git add ."); 
    puts("please input Remarks:");
    str(ps);
    system(ps);
    system("sudo git push origin master");
    //free(ps);
}