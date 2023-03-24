#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){

   
     int t,res, N,M;
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &N,&M);
        res= N*5+7*M;
        printf("%d\n",res);
    }


   return 0; 
}