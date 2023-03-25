#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(){
    int t,a,b;
    scanf("%d",&t);
    while (t--){
    scanf("%d %d",&a,&b);
    int i=0,count=0;
    while (i<a){
        int c;
        scanf("%d",&c);
        if (c>b) count+=1;
        i+=1;
    }
    printf("%d\n",count);
    }
    return 0;
    
}
