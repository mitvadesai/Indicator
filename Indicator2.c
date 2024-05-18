#include<stdio.h>
void  main()
{	
    char str[100];
	int i,c=0;
	
	printf("Enter any string: ");
    gets(str);
    
    char *p;
    p=&str;
   
   for(i=0;str[i]!='\0';i++){
        c++;
        p++;
    }
    printf("The length of the string is: %d", c);
}