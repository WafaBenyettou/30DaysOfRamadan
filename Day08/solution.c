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
	int a,b;
    while(t--){
        scanf("%d %d",&a,&b);
        int c=a+b;
        if(c%2==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
	
	return 0;
}