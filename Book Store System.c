#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	printf("\t\t\t\t\tWELCOME TO BOOK STORE\n");
	printf("\t\t\t\t\tLovely Professional University,Phagwara\n");
	printf("\t\t\t\t\t\tMob.No.:- +919905365870\n\n");
	int i;
	int q,p=0,x=0;
	int total=0;
	// SR.NO. AND NAMES OF BOOK
	char f[5]= "S.No.";
	printf("%s\t\t",f);
	int g[5]={1,2,3,4,5};
	for(i=0;i<=4;i++)
	{
		printf("%d\t\t",g[i]);
    }
	char *a[18]={"\nBook Name\t","S.O.M\t\t","F.M\t\t","R.C.C\t\t","Irrigation\t","Highway Engg.\n","Author's Name\t","R.K.Bansal\t","R.K.Bansal\t","Birinder Singh\t","S.K.Garg\t","B.C Punamia\n","Publisher\t","Laxmi\t\t","Laxmi\t\t","Kaption\t\t","Khanna\t\t","Pearson\n"};
	for(i=0;i<=17;i++)
	{
		printf("%s",a[i]);
	} 
	// QUANTITY
	char b[9]= "Quantity";
	printf("%s",b);
	int c[5]={25,15,16,12,10};
	for(i=0;i<=4;i++)
	{
		printf("\t%d\t",c[i]);
    } 
	// PRICE
	char d[14]= "Price(In Rs.)";
	printf("\n%s",d);
	int e[5]={850,700,150,525,250};
	for(i=0;i<=4;i++)
	{
		printf("\t%d\t",e[i]);
    }
    printf("\n\n\t\t\t\"Welcome\" and continue your shopping with following options :-\n"); 
    int n, num;  
do  // DO WHILE LOOP STARTED
 {  	
    printf("1. S.O.M\n2. F.M\n3. R.C.C\n4. Irrigation\n5. Highway\n\n");
	
	   printf("\nPlease, Enter the \"S.No.\" of the Book that You Want to Buy :-\n\n");
	   scanf("%d",&n);
 
    switch(n) // SWITCH CASE INSIDE DO WHILE
    {       
	case 1:printf("\n  1. You have selected \"S.O.M\"\n  2. Now, Please enter the number of quantities :-\n\n");
	     scanf("%d",&q);
	     if(q<=c[0])
	     {
		 p=850*q;
		 total=total+p;
		 printf("\nThe total cost of your book is Rs.%d\n", p);
	     c[0]=c[0]-q;
	     x=x+q; 
	 	 }
	 	 else
	 	 {
	 		printf("\nNot enough Quantity available.\n");
	 	 }
	     break;		
	case 2:printf("\n  1. You have selected \"F.M\"\n  2. Now, Please enter the number of quantities :-\n\n");
	     scanf("%d",&q);
	     if(q<=c[1])
	     {
		 p=700*q;
		 total=total+p;
		 printf("\nThe total cost of your book is Rs.%d\n",p);
		 c[1]=c[1]-q;
		 x=x+q; 
         }
         else
         {
         	printf("\nNot enough Quantity available.\n");
		 }
		 break;
    case 3:printf("\n  1. You have selected \"R.C.C\"\n  2. Now, Please enter the number of quantities :-\n\n");
         scanf("%d",&q);
         if(q<=c[2])
	     {
		 p=150*q;
		 total=total+p;
		 printf("\nThe total cost of your book is Rs.%d\n", p);
		 c[2]=c[2]-q;
		 x=x+q;
	     }
	     else
         {
         	printf("\nNot enough Quantity available.\n");
		 }
		 break;
	case 4:printf("\n  1. You have selected \"Irrigation\"\n  2. Now, Please enter the number of quantities :-\n\n");
	     scanf("%d",&q);
	     if(q<=c[3])
	     {
		 p=525*q;
		 total=total+p;
		 printf("\nThe total cost of your book is Rs.%d\n", p);
		 c[3]=c[3]-q;
		 x=x+q;
	     }
	      else
         {
         	printf("\nNot enough Quantity available.\n");
		 }
		 break;
	case 5:printf("\n  1. You have selected \"Highaway Engg.\"\n  2. Now, Please enter the number of quantities :-\n\n");
	     scanf("%d",&q);
	     if(q<=c[4])
	     {
		 p=250*q;
		 total=total+p;
		 printf("\nThe total cost of your book is Rs.%d\n", p);
		 c[4]=c[4]-q;
		 x=x+q;
	     }
	     else
         {
         	printf("\nNot enough Quantity available.\n");
		 }
		 break;
	default:printf("\nPlease select within the option\n");
    }
         printf("Please, Press 1 to continue shopping and Any other to Exit.\n\n");
	     scanf("%d", &num);
 }  
while(num==1); // DO WHILE LOOP ENDED

	printf("Your Grand Total is %d\n",total);	
	printf("\nThe Total Number of Purchased Books are = %d\n\n",x);
    // FOR PRINTING UPDATED QUANTITY AND UPDATED RECORDS 
	printf("\t\t\t\"UPDATED RECORDS AFTER PURCHASING OF THE BOOKS\"");				
	for(i=0;i<=17;i++)
	{
		printf("%s",a[i]);
	}
	// FOR QUANTITY
	printf("Quantity"); 
		for(i=0;i<=4;i++)
	{
		printf("\t%d\t",c[i]);
    }
    //FOR PRICE
    printf("\nPrice");
    for(i=0;i<=4;i++)
	{
		printf("\t\t%d",e[i]);
    }									
	printf("\n\n...................Thank you for shopping with us Hoping to See You Again................... ");				
	}
