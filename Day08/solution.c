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
	    int a,b,c,x;
	    scanf("%d",&a);
	    scanf("%d",&b);
	    scanf("%d",&c);
	    scanf("%d",&x);
	    if((a+b)>=x||(b+c)>=x||(c+a)>=x){
	        printf("yes\n");
	    }
	    else{
	    printf("No\n");
	        
	    }
	}
   
   return 0; 
}