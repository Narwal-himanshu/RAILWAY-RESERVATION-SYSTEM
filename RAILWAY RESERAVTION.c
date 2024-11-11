#include<stdio.h>
#include<math.h>
#include<string.h>
void  data();
  struct data_id{
         	char name[100];
         	int age;
      	 };
int main()
{ 
  printf("CHOOSE THE ROUTE: ");
  printf("\n1.DELHI TO CHANDIGARH JUNCTION.\n2. DELHI TO ROHTAK JUNCTION.\n3. DELHI TO JAIPUR: ");
  int route;
  scanf("%d",&route);
  switch(route) {
    case 1: printf("CHOOSEN ROUTE IS DELHI TO CHANDIGARH JUNCTION.\n");
            printf("CHOOSE THE TRAIN:\nTRAIN NUM.  \tTRAIN NAME\t. 0TIMINGS.\n");
            printf("22447\t\tVANDE BHARAT EXPRESS\t5:50a.m-8:38a.m\n");
            printf("12011\t\tKALKA SATABDI EXPRESS\t7:40a.m-10:59a.m\n");
            printf("12925\t\tPASCHIM SF EXPRESS\t11:30a.m-03:30p.m\n");
            printf("12449\t\tGOA SMPRK EXPRESS\t02:45a.m-06:25p.m\n");
            printf("12045\t\tCHD SHATABDI EXPRESS\t07:15p.m-10:31p.m\n");
            printf("11905\t\tHOSIYAR MAIL\t10:20p.m-03:15a.m\n"); 
            break;
    case 2:  printf("CHOOSEN ROUTE IS DELHI TO ROHTAK.\n");
            printf("CHOOSE THE TRAIN:\nTRAIN NUM.  \tTRAIN NAME\t. 0TIMINGS.\n");
            printf("12555\t\tGORAKHDAM EXPRESS\t5:30a.m-6:30a.m\n");
            printf("22479\t\tSARBAT DA EXPRESS\t7:00a.m-08:18a.m\n");
            printf("12485\t\tGANGADHAR EXPRESS\t10:30a.m-11:30a.m\n");
            printf("14323\t\tROK-INTERCITY EXPRESS\t10:45a.m-12:20p.m\n");
            printf("11449\t\tKATRA WEEKLY EXPRESS\t09:10p.m-10:31p.m\n");
            printf("12137\t\tPUNJAB MAIL\t9:40p.m-10:56p.m\n"); 
			break;
	case 3:  printf("CHOOSEN ROUTE IS DELHI TO JAIPUR JUNCTION.\n");
            printf("CHOOSE THE TRAIN:\nTRAIN NUM.  \tTRAIN NAME\t. 0TIMINGS.\n");
            printf("12015\t\tAJMER SHATBDI EXPRESS\t6:10a.m-10:38a.m\n");
            printf("19566\t\tUTTRANCHAL EXPRESS\t1:25p.m-07:00p.m\n");
            printf("12414\t\tPOOJA SF EXPRESS\t04:15a.m-09:30a.m\n");
                
        }
   
    printf("ENTER THE TRAIN NUMBER: ");
    data();
    return 0;
}

void data() {
	int num;
    scanf("%d",&num);
    printf("Enter the number of passengers: ");
    int pass;
    scanf("%d", &pass);
    printf("\n");
    int i;
    struct data_id p[10];
        for(i=0; i<pass; i++){
         printf("enter the name of the passenger %d: ", i+1);
         scanf("%s", &p[i].name);
         printf("enter the age of the passenger %d: ", i+1);
         scanf("%d", &p[i].age);
         printf("\n");
        }
    printf("ENTER THE DATE FOR RESERVATION: ");
	    int date;
        scanf("%d", &date);
        printf("\nENTER THE MONTH FOR RESERVATION: ");
        int month;
        scanf("%d", &month);
        printf("couch: (1)AC\n     (2)SLEEPER(SL): ");
        int couch;
        scanf("%d",&couch);
          printf("===========================DETAILS==============================");
          printf("\n==CONGRATULATIONS!!! You have successfully reserved your seat.==");
          for(i = 0; i<pass; i++){
          	printf("\n\tNAME:%s\t\n\tAGE:%d", p[i].name,p[i].age );
		  }
          if(couch==1) {
         printf("\n\tTotal fair is: %d", pass* 135);
         
         printf("\n\tTRAIN NUMBER: %d.\n\tNo. of passengers: %d.\n\tType of coach : AC.\n\tRESERVATION DATE:%d/%d/2024.",num, pass,date,month );
          
         } else { 
         printf("\n\t\tTotal fair is: %d\n", pass* 60);
         printf("\tCONGRATULATIONS!!! You have successfully reserved your seat.");
         printf("\n\tTRAIN NUMBER: %d.\n\tNo. of passengers: %d.\n\tType of coach : SLEEPER.\n\tRESERVATION DATE:%d/%d/2024.",num, pass,date,month );
          }
           printf("\n=====================HAVE A SAFE JOURNEY========================");
           //return 0;
         }