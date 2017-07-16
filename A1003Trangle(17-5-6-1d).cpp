#include<stdio.h>
#define Column 25
#define Row 18
int main(){
	int i,j;
	char alpha[Column][Row];
     for(j=0;j<Row;j++){
     	
     	alpha[0][j]='A'+j;    	
	 }
	 for(i=0;i<Column;i++){
     	
     	alpha[i][0]='A'+i;    	     
	 }
	 for(i=0;i<Column-1;i++){
	 	for(j=0;j<Row-1;j++){
	 		alpha[i+1][j+1]=alpha[i][j];
	 			
	 		
		 }	 		 		 	
	 }

	 for(i=0;i<Column;i++){
	 	for(j=0;j<Row;j++){
	 	printf("%c",alpha[i][j]);
	 			
	 		
		 }
	 	printf("\n");	 	
	 	
	 }

return 0;

} 
