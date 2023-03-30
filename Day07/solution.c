#include <stdio.h>
#include<stdlib.h>
int main(void) {
	
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char m[25000],n[25000];
	    scanf("%s",m);
	    scanf("%s",n);
	    int l1=strlen(m);
	    int l2=strlen(n);
	    
	    
	    if(l1<l2){
	        int i=0,j=0;
	        while(n[j]!='\0'){
	            if(m[i]==n[j]){
	                i++;
	            }
	            j++;
	        }
	        if(m[i]=='\0'){
	                printf("YES\n");
	            }
	            else{
	                printf("NO\n");
	            }
	        }
	    
	        else
	        {
	            int i=0,j=0;
	            while(m[j]!='\0'){
	                if(n[i]==m[j]){
	                    i++;
	                }
	                j++;
	            }
	            if(n[i]=='\0'){
	                printf("YES\n");
	            }
	            else{
	                printf("NO\n");
	            }
	        }
	    }
	
	return 0;
}


