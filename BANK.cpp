#include<stdio.h>
int main()
{
	int CHOICE,WITHDRAW,PIN,PASSWORD,language,LOAN;
	printf("enter your language\n 1 for english \n 2 for hindi \n 3 for telugu \n");
	scanf("%d",&language);
	if(language == 1)
	{
	 	printf("WELCOME TO SBI BANK\n");
	//tyr7tfywqgwiuetywrefru
     	printf("PLEASE INSERT THE ATM CARD");
	    printf("\nTHANK YOU FOR YOUR PATIENCE");
	    
	    printf("\nPLEASE ENTER PIN TO CONTINUE\n");
	    scanf("%d",&PIN);
	    if(PIN==1234)
	     {
		  printf("PLEASE ENTER PASSWORD\n");
		  scanf("%d",&PASSWORD);
		  if(PASSWORD==5678)
		  {
		    printf("ENTER YOUR CHOICE");
       	    printf("\n 1.SAVINGS \n 2.WITHDRAW \n 3.BALANCE \n 4.RECIEPT \n 5.LOAN \n");
	        scanf("%d",&CHOICE);
	        switch(CHOICE)
	        {
	          case 1 : printf("YOUR SAVINGS WERE 8900000");
   	          break;
	          case 2 :
	                   printf("enter an amount to witndraw\n",WITHDRAW);
	                   scanf("%d",&WITHDRAW);
	                   if(WITHDRAW>=9800000)
            	       {
		                  printf("you are not having that much of money\n",WITHDRAW);
	                   }
	                   else
	                   {
		                  printf("your money has withdrawn plse check ur balance\n",WITHDRAW);
                    	}
	          break;		
      	      case 3 : printf("YOUR BALANCE IS 100000");
	          break;
	          case 4 : printf("YOUR RECIEPT IS LOADING");
	          break;
	          case 5 : printf("HOW MUCH LOAN DO YOU WANT \n",LOAN);
	                   scanf("%d",&LOAN);
	                   if(LOAN>=100000)
					   {
					   	printf("YOU CAN TAKE YOUR LOAN BY GIVING PAN CARD TO BANK ");
						 }
						 else
						 {
						 	printf("YOU WANT TO TAKE A LOAN ABOVE 100000 SO YOU HAVE TO SUBMIT DOCUMENTS TO YOUR RESPECTIVE BANK ");
						   }  
	          break;
	          default : ("PLEASE ENTER AN VALID NUMBER");
	          break;
	    
				
	}	
		}
		else
		{
			printf("\nPLEASE ENTER CORRECT PASSWORD");
		}
	
	    }
	
	
	else
	{
		printf("\nPLEASE ENTER CORRECT PIN\n");
	}
	
	}
	else
	{
		printf("please select only english");
	}	
	

	printf("\nTHANK YOU VISIT AGAIN");
			 
}
