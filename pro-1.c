#include<stdio.h>
main()
{
	int i,len,upr=0,lwr=0,num=0,spec=0;
	
	char pswd[10];
	
	printf("Enter your password :");
	gets(pswd);
	
	len = strlen(pswd);
	for(i=0;i<=len;i++){
		if (pswd[i]>=65 && pswd[i]<=90)upr++;
		if (pswd[i]>=97 && pswd[i]<=122)lwr++;
		if (pswd[i]>=48 && pswd[i]<=57)num++;
		if (pswd[i]=='@' || pswd[i]=='#' || pswd[i]=='$' || pswd[i]=='_')spec++;	
	}
	
	if(upr>0 && num>0 && lwr>0 && spec>0){
		printf("Your Password is Strong.");
	}
	else{
		printf("Your Password is Weak.");
	}
}
