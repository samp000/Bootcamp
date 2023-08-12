
	#include<stdio.h>
	
	void main() {
	
		int fTeamScore,sTeamScore;

		   printf("Enter score of first team and second team respectively:");
		   scanf("%d %d",&fTeamScore,&sTeamScore);

		   if(fTeamScore == sTeamScore) {
			   printf("Super over\n");

		   }else {
			   if(fTeamScore > sTeamScore)
			  	 printf("Team 1 wins\n");
			   else
			   	printf("Team 2 wins\n");
		   }
	}
