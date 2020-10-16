#include<stdio.h>
#include<stdlib.h>
#define MAX 5	
int top=-1,stack[MAX];
void main()
{
	int ch;
	
	while(1)
	{
		printf("\n  Stack Menu  ");
		printf("\n \n 1.Push \n 2.Pop \n 3.Display\n 4.Exit");
		printf("\n \n Enter your choice(1-4):");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:{
                    int val;
	            	if(top==MAX-1)
                	{
	                	printf("\n full");
                	}
                	else
                	{
	                	printf("\n Enter element to push:");
	                	scanf("%d",&val);
	                	top=top+1;
		                stack[top]=val;
	                }
                    break;
			}
			case 2:{

                if(top==-1)
	            {
		            printf("\nStack is empty!!");
            	}
            	else
	            {
	            	printf("\nDeleted element is %d",stack[top]);
	            	top=top-1;
	            }
					break;
			}
			case 3:{

                   int i;
	                if(top==-1)
                	{
	                	printf("\nStack is empty!!");
                	}
                	else
                	{
	                	printf("\nStack is...\n");
	                	for(i=top;i>=0;--i)
	        	    	printf("%d\n",stack[i]);
                	}
					break;
			}
			case 4: exit(0);
			
			default: printf("\n not valid choice");
		}
	}
}
