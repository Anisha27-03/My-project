//*********Booking Online Bus Tickets **********//

#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int route();
int tickets();
int details(int);
int payment(int);
struct bus_ticket
{
	char date[10];
};
typedef struct person
{
	char name[50];      
	char age[10];
	char Phone_number[50];
	char Mail_id[50];
}pers;
int main()
{
	int SOUDES;
	time_t t;
	time(&t);
	printf("%s",ctime(&t)); 
	struct bus_ticket b[50];
	printf("\n######  WELCOME TO BUS4U  ######\n\n");
	printf("Enter the date after this current date and time when you want to travel:\n"); //Enter the date of travel
	scanf("%s",b[50].date);
	printf("\nDate = %s\n",b[50].date);
	printf("\nThe Bus-Routes on this Date:\n\t1.Guntur-Vijayawada\n\t2.Vizag-Hyderabad\n\t3.Vijayawada-Kadapa\n\t4.Waragal-Ongole\n\t5.Vijayawada-Tirupati\n"); //select the routes
	printf("\nEnter the bus route number which you want to travel=\n"); //to select the bus route number
	scanf("%d",&SOUDES);
	switch(SOUDES)
	{
		case 1:
		    route1();
		    break;
		case 2:
		    route2();
			break;
		case 3:
		    route3(); 
			break;
		case 4:
			route4();
			break;
		case 5:
		    route5();
			break;
	}
}
int route1()
{
		printf("This bus route is Guntur-Vijayawada\n");
		int guvi;
		printf("Types of buses for the route guntur to vijayawada:  "); //Select the type of bus via this route
		printf("\n\t 1.APSRTC at 7:00am\n\t 2.LUXURY at 1:00pm\n\t 3.DELUXE at 9:00pm\n");
	    scanf("%d",&guvi);
	    switch(guvi)
	    {
	    	case 1:
	    		printf("you have selected APSRTC bus\n");
	    		tickets1();
	    		break;
	    	case 2:
				printf("you have selected LUXURY bus\n");
				tickets2();
				break;
	        case 3:
			    printf("you have selected DULEX bus\n");
			    tickets3();
			    break; 
		}
}
int route2() 
{
		printf("This bus route is Vizag-Hyderabad\n");
		int vihy;
		printf("Types of buses for the route Vizag-Hyderabad:  "); //Select the route via this route
		printf("\n\t 1.orange travels at 9:00am\n\t 2.Knight rider at 2:00pm\n\t 3.SRM travels at 8:00pm\n");
	    scanf("%d",&vihy);
	    switch(vihy)
	    {
	    	case 1:
	    		printf("you have selected Orange travels bus\n");
	    		tickets1();
	    		break;
	    	case 2:
				printf("you have selected Knight rider bus\n");
				tickets2();
				break;
	        case 3:
			    printf("you have selected SRM travels bus\n");
			    tickets3();
			    break;
		}
}
int route3() 
{
		printf("This bus route is Vijayawada-Kadap\n");
		int vihy;
		printf("Types of buses for the route Vizayawada-Kadapa:  "); //Select the route via this route
		printf("\n\t 1.Hans travels at 6:00am\n\t 2.AMD at 3:00pm\n\t 3.SYT travels at 10:00pm\n");
	    scanf("%d",&vihy);
	    switch(vihy)
	    {
	    	case 1:
	    		printf("you have selected Hans travels bus\n");
	    		tickets1();
	    		break;
	    	case 2:
				printf("you have selected AMD bus\n");
				tickets2();
				break;
	        case 3:
			    printf("you have selected SYT travels bus\n");
			    tickets3();
			    break;
		}
}
int route4() 
{
		printf("This bus route isWarangal-Ongole\n");
		int vihy;
		printf("Types of buses for the route Warangal-Ongole:  "); //select the route via this route 
		printf("\n\t 1.Sea bird at 4:00am\n\t 2.MDA at 1:00pm\n\t 3.sky stars travels at 9:00pm\n");
	    scanf("%d",&vihy);
	    switch(vihy)
	    {
	    	case 1:
	    		printf("you have selected sea bird\n");
	    		tickets1();
	    		break;
	    	case 2:
				printf("you have selected MDA\n");
				tickets2();
				break;
	        case 3:
			    printf("you have selected sky stars \n");
			    tickets3();
			    break;
		}
}int route5() 
{
		printf("This bus route is Vijayawada -Tirupathi\n");
		int vihy;
		printf("Types of buses for the route Vijayawada-Tirupathi:  "); //Select the route via this route
		printf("\n\t 1.ap travels at 6:00am\n\t 2.Vikram travels at 3:00pm\n\t 3.amaravathi travels at 10:00pm\n");
	    scanf("%d",&vihy);
	    switch(vihy)
	    {
	    	case 1:
	    		printf("you have selected ap travels\n");
	    		tickets1();
	    		break;
	    	case 2:
				printf("you have selected Vikram travels\n");
				tickets2();
				break;
	    
	        case 3:
			    printf("you have selected amaravathi travels\n ");
			    tickets3();
			    break;
		}
}
int tickets1()
{
    printf("Select the seat according to your comfort: \n");
	printf("\n\n ---------------------------------- \n|                                  |\n ---------------------------------- \n|  .__.  .__.          .__.  .__.  |\n|  |1 |  |2 |          |3 |  |4 |  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |5 |  |6 |          |7 |  |8 |  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |9 |  |10|          |11|  |12|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |13|  |14|          |15|  |16|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |17|  |18|          |19|  |20|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.   .__.   .__.  .__.  |\n|  |21|  |22|   |23|   |24|  |25|  |\n|  |__|  |__|   |__|   |__|  |__|  |\n|                                  |\n ---------------------------------- \n");
    int i,n,seats,tickt;
    printf("Enter the number of seats you want to select = \n\n"); //enter the number of seats
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	printf("Enter the seat number b/w 1 to 25 =\n");
    	scanf("%d",&seats);
	}
	tickt=details1(n);
}
int tickets2()
{
    printf("Select the seat according to your comfort: \n");
	printf("\n\n ---------------------------------- \n|                                  |\n ---------------------------------- \n|  .__.  .__.          .__.  .__.  |\n|  |1 |  |2 |          |3 |  |4 |  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |5 |  |6 |          |7 |  |8 |  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |9 |  |10|          |11|  |12|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |13|  |14|          |15|  |16|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |17|  |18|          |19|  |20|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.   .__.   .__.  .__.  |\n|  |21|  |22|   |23|   |24|  |25|  |\n|  |__|  |__|   |__|   |__|  |__|  |\n|                                  |\n ---------------------------------- \n");
    int i,n,seats,tickt;
    printf("Enter the number of seats you want to select =\n\n");//enter the number of seats
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	printf("Enter the seat number b/w 1 to 25 =\n");
    	scanf("%d",&seats);
	}
	tickt=details2(n);
}
int tickets3()
{
    printf("Select the seat according to your comfort: \n");
	printf("\n\n ---------------------------------- \n|                                  |\n ---------------------------------- \n|  .__.  .__.          .__.  .__.  |\n|  |1 |  |2 |          |3 |  |4 |  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |5 |  |6 |          |7 |  |8 |  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |9 |  |10|          |11|  |12|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |13|  |14|          |15|  |16|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |17|  |18|          |19|  |20|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.   .__.   .__.  .__.  |\n|  |21|  |22|   |23|   |24|  |25|  |\n|  |__|  |__|   |__|   |__|  |__|  |\n|                                  |\n ---------------------------------- \n");
    int i,n,seats,tickt;
    printf("Enter the number of seats you want to select = \n\n");//enter the number of seats
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	printf("Enter the seat number b/w 1 to 25 =\n");
    	scanf("%d",&seats);
	}
	tickt=details3(n);
}
int details1(int n)
{ 
    pers *p;
	int i,token;
	for(i=1;i<=n;i++)
	{
		printf("Enter the Name of person %d:\n",i); //name of the person
		fflush(stdin);
		scanf("%[^\n]",&p[50].name);
		printf("Enter the Age of person %d:\n",i);//age of the person
		scanf("%s",&p[10].age);
		printf("Enter the Phone number of person %d:\n",i);//phone number of the person
		scanf("%s",&p[50].Phone_number);
		printf("Enter the Mail Id of person %d:\n",i);//Mail-id of the person
		scanf("%s",&p[50].Mail_id);
		printf("\n  The details of person %d:\n",i);
		printf(" ------------------------------------------------\n");
		printf(" Name of the person =%s\n Age = %s\n phone number = %s\n Mail Id = %s\n",p[50].name,p[10].age,p[50].Phone_number,p[50].Mail_id);
	   	printf(" ------------------------------------------------\n");
	}
	token=payment1(n);
}
int details2(int n)
{ 
    pers *p;
	int i,token;
	for(i=1;i<=n;i++)
	{
		printf("Enter the Name of person %d:\n",i); //name of the person
		fflush(stdin);
		scanf("%[^\n]",&p[50].name);
		printf("Enter the Age of person %d:\n",i); //age of the person
		scanf("%s",&p[10].age);
		printf("Enter the Phone number of person %d:\n",i); //phone number of the person
		scanf("%s",&p[50].Phone_number);
		printf("Enter the Mail Id of person %d:\n",i); //mail-id of the person
		scanf("%s",&p[50].Mail_id);
		printf("\n  The details of person %d:\n",i);
		printf(" ------------------------------------------------\n");
		printf(" Name of the person =%s\n Age = %s\n phone number = %s\n Mail Id = %s\n",p[50].name,p[10].age,p[50].Phone_number,p[50].Mail_id);
	   	printf(" ------------------------------------------------\n");
	}
	token=payment2(n);
}
int details3(int n)
{ 
    pers *p;
	int i,token;
	for(i=1;i<=n;i++)
	{
		printf("Enter the Name of person %d:\n",i);//Name of the person
		fflush(stdin);
		scanf("%[^\n]",&p[50].name);
		printf("Enter the Age of person %d:\n",i);//age of the person
		scanf("%s",&p[10].age);
		printf("Enter the Phone number of person %d:\n",i);//phone number of the person
		scanf("%s",&p[50].Phone_number);
		printf("Enter the Mail Id of person %d:\n",i);//mail-id of the person
		scanf("%s",&p[50].Mail_id);
	  	printf("\n  The details of person %d:\n",i);
		printf(" ------------------------------------------------\n");
		printf(" Name of the person =%s\n Age = %s\n phone number = %s\n Mail Id = %s\n",p[50].name,p[10].age,p[50].Phone_number,p[50].Mail_id);
	  	printf(" ------------------------------------------------\n");
	}
	token=payment3(n);
}
int payment1(int n)
{
	int z;
	printf("Each ticket costs = 500/-\n");
	int amount=500,cost,bill_amount;
	bill_amount = n*amount;
	printf("Total bill amount is %d",bill_amount); //total bill 
	printf("\nEnter the amount = \n");
	scanf("%d",&cost);
	if(cost==bill_amount)
	{
	    printf("***Payment is successful***\n***Hope you will enjoy the trip***\nDo you want to continue booking (1-Yes/0-No):\n");
	}
	else
	{
		printf("Payment declined\nPlease try again\n");
		printf("Do you want to continue booking (1-Yes/0-No):\n");
	}
	scanf("%d",&z);
	if(z== 1)
	{
		main();
	}
	if (z==0)
	{
		exit(0);
	}
}
int payment2(int n)
{
	int z;
	printf("Each ticket costs = 700/-\n");
	int amount=700,cost,bill_amount;
	bill_amount = n*amount;
	printf("Total bill amount is %d",bill_amount);
	printf("\nEnter the amount = \n");
	scanf("%d",&cost);
	if(cost==bill_amount)
	{
	    printf("***Payment is successful***\n***Hope you will enjoy the trip***\nDo you want to continue booking (1-Yes/0-No):\n");
	}
	else
	{
		printf("Payment declined\nPlease try again\n");
		printf("Do you want to continue booking (1-Yes/0-No):\n");
	}
	scanf("%d",&z);
	if(z== 1)
	{
		main();
	}
	if (z==0)
	{
		exit(0);
	}
}
int payment3(int n)
{
	printf("Each ticket costs = 1000/-\n");
	int amount=1000,cost,bill_amount;
	bill_amount = n*amount;
	int z;
	printf("Total bill amount is %d\n",bill_amount);//total bill
	printf("\nEnter the amount = \n");
	scanf("%d",&cost);
	if(cost==bill_amount)
	{
	    printf("***Payment is successful***\n***Hope you will enjoy the trip***\nDo you want to continue booking (1-Yes/0-No):\n");
	}
	else
	{
		printf("Payment declined\nPlease try again\n");
		printf("Do you want to continue booking (1-Yes/0-No):\n");
	}
	scanf("%d",&z);
	if(z== 1)
	{
		main();
	}
	if (z==0)
	{
		exit(0);
	}
}
