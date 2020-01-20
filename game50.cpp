#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	printf("\t\t\t\t\t\t\t***********************\n");
	printf("\t\t\t\t\t\t\tWELCOME TO HANGMAN GAME\n");
	printf("\t\t\t\t\t\t\t=======================\n\n");
    getch();
    
	char ch[20], str[6]={'k','i','c','k','\0'};
	
    printf("_I_ _\n");
	printf("Hint:- One of the famous movie of salman khan released in 2012\n");
	int i, j, k=1, l=3;
	for(i=0;i<3;i++)
	{
	
	for(j=0;str[j]!='\0';j++)
	{
			
	if(j==1)
	{
	continue;
	}
	scanf("%s",&ch[j]);
	if(ch[j]==str[j])
	    {
	    printf("correct answer\n");
	    system("color 27");
        k=1;
	   }
	   
		else 
		{
	    printf("not matched!!!\n");
	    system("color 47");
	    k=0;
		}
		
		if(i==2 && k==0)
		{
	printf("game over!!!\n");
	printf("Correct answer is 'KICK'\n");
		}
	
	if(k==0)
	{
	printf("\nchances left=% d\n",l=l-1);
	break;
    }
    	
}

if(k==1)
{
printf("congrates you are great!!!\n");
break;
}
}

printf("\n----------------------------------------------------------------\n");
char st[20]={'d','a','n','g','a','l','\0'};

char c[10];
int  x,m=3,g;
printf("\nEnter 1 to continue & 2 to exit:-");

scanf("%d",&g);
system("cls");
if(g!=1)
{
	system("color 9");
exit(0);
}
else
{
	system("color B");
		printf("_A_ _A_\n");
printf("Hint:- One of te famous movie of Aamir khan based on wrestling\n");
printf("\nenter the name of the movie\n");
}	
for(i=1;i<=3;i++)
{
	for(j=0;st[j]!='\0';j++)
	{
		if(j==1 || j==4)
		{
			continue;
		}
		scanf("%s",&c[j]);
	if(st[j]==c[j])
	{
		printf("character matched\n");
		system("color 27");
		x=1;
	}
	else{
		printf("not matched\n");
		system("color 47");
	x=0;
	}
	if(i==3 && x==0)
	{
	printf("you are  hanged\n");
	printf("Correct answer is 'DANGAL'\n");	
    }
	if(x==0)
	{
	printf("\nchances left=% d\n",m=m-1);
	break;
    }
    	
}

if(x==1)
{
printf("congrates you are great!!!\n");
break;
}
}
printf("\n----------------------------------------------------------------\n");
char st1[20]={'d','h','o','l','\0'};
char c1[10];
int  y,n=3,w;

printf("Enter 1 to continue & 2 to exit:-");

scanf("%d",&w);
system("cls");
if(w!=1)
{
	system("color 9");
exit(0);
}
else
{
		printf("_ _O_\n");
printf("Hint:- Comedian movie of rajpal yadav\n");
printf("\n Enter the name of the movie\n");
}	


for(i=1;i<=3;i++)
{
	for(j=0;st1[j]!='\0';j++)
	{
		if(j==2)
		{
			continue;
		}
		scanf("%s",&c1[j]);
	if(st1[j]==c1[j])
	{
		printf("character matched\n");
		y=1;
	}
	else{
		printf("not matched\n");
	y=0;
	}
	if(i==3 && y==0)
	{
	printf("you are  hanged\n");
	printf("Correct answer is 'DHOL'\n");	
    }
	if(y==0)
	{
	printf("\nchances left=% d\n",n=n-1);
	break;
    }
    	
}

if(y==1)
{
printf("congrates you are great!!!\n");
break;
}
}
printf("\n----------------------------------------------------------------\n");
char st2[20]={'s','h','o','l','a','y','\0'};
char c2[10];
int  z,p=3,q;

printf("Enter 1 to continue & 2 to exit:-");

scanf("%d",&q);
if(q!=1)
{
exit(0);
}
else
{
		printf("_ _O_A_\n");
printf("Hint:-One of the famous movie of amitabh bachan and dharmendra based ");
printf("on their friendhip\n");
printf("\n Enter the name of the movie\n");
}	


for(i=1;i<=3;i++)
{
	for(j=0;st2[j]!='\0';j++)
	{
		if(j==2 || j==4)
		{
			continue;
		}
		scanf("%s",&c2[j]);
	if(st2[j]==c2[j])
	{
		printf("character matched\n");
		z=1;
	}
	else{
		printf("not matched\n");
	z=0;
	}
	if(i==3 && z==0)
	{
	printf("you are  hanged\n");
	printf("Correct answer is 'SHOLAY'\n");	
    }
	if(z==0)
	{
	printf("\nchances left=% d\n",p=p-1);
	break;
    }
    	
}

if(z==1)
{
printf("congrates you are great!!!\n");
break;
}
}
printf("\n----------------------------------------------------------------\n");
char st3[20]={'g','h','a','y','a','l','\0'};
char c3[10];
int  x1,m1=3,g1;

printf("Enter 1 to continue & 2 to exit:-");

scanf("%d",&g1);
if(g1 !=1)
{
exit(0);
}
else
{
		printf("_ _A_A_\n");
printf("Hint:-An action movie of sunny deol released in 1990\n ");
		
printf("\nenter the name of the movie\n");
}	


for(i=1;i<=3;i++)
{
	for(j=0;st3[j]!='\0';j++)
	{
		if(j==2||j==4)
		{
			continue;
		}
		scanf("%s",&c3[j]);
	if(st3[j]==c3[j])
	{
		printf("character matched\n");
		x1=1;
	}
	else{
		printf("not matched\n");
	x1=0;
	}
	if(i==3 && x1==0)
	{
	printf("you are  hanged\n");
	printf("Correct answer is 'GHAYAL'\n");	
    }
	if(x1==0)
	{
	printf("\nchances left=% d\n",m1=m1-1);
	break;
    }
    	
}

if(x1==1)
{
printf("congrates you are great!!!\n");
break;
}
}
printf("\n\t\t****************************************************************\n");
printf("\t\t\tthanks for playing, Well played keep it up\n");
printf("\t\t================================================================");
}
