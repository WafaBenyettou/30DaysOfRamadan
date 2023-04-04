#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
  int t;
    scanf("%d",&t);
    while(t--) {
        int a,b,n;
        scanf("%d %d",&a,&b);
        n=a-b;
        printf("%d\n",n);
    }
   return 0; 
}