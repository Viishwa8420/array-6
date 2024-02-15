#include<stdio.h>
main()
{
	int i,len,at=0,length,upr=0,lwr=0,num=0,spec=0;
	
	char pswd[10],mail[30],pass[10],email[30];
	
	printf("Enter your e-mail :");
	gets(mail);
	
	
	printf("Enter your password :");
	gets(pswd);
	
	length = strlen(mail);
	len = strlen(pswd);
	
	for(i=0;i<=length;i++){
		if(mail[i]>=97 && mail[i]<=122)lwr++;
		if(mail[i]=='@')at++;
	}
	if(lwr>0 && at==1 && strstr(mail, "gmail.com") != NULL)
	{
		printf("Your E-mail is correct.\n");
	}
	else{
		printf("Your E-mail is incorrect.\n");
	}
	
	 
	for(i=0;i<=len;i++){
		if (pswd[i]>=65 && pswd[i]<=90)upr++;
		if (pswd[i]>=97 && pswd[i]<=122)lwr++;
		if (pswd[i]>=48 && pswd[i]<=57)num++;
		if (pswd[i]=='@' || pswd[i]=='#' || pswd[i]=='$' || pswd[i]=='_')spec++;	
	}
	
	if(upr>0 && num>0 && lwr>0 && spec>0){
		printf("Your Password is Strong.\n");
	}
	else{
		printf("Your Password is Weak.\n");
	}
	
	
	printf("\nEnter your e-mail for login to your account:\n");
	gets(email);
	
	printf("Enter your password for login to your account:\n");
	gets(pass);
	
	if (strcmp(email, mail) == 0 && strcmp(pass, pswd) == 0) 
	{
        printf("You have logged in successfully.\n");
    }
    else {
        printf("There is something wrong...please check and correct your E-mail or password.\n");
    }
}
