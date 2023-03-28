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
	while(t--){
	    int A,B;
	    scanf("%d %d",&A,&B);
	    if(A>B){
	        printf("A\n");
	    }
	    else{
	        printf("B\n");
	    }
	}
	return 0;
}