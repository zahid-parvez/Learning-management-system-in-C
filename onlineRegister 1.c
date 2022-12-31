#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
void adminlogin();
void adminOptions();
void cdetails();
void Edetails();
void courses();
void Newcourse();
void newRegistration();
void exam();
void sports();
void projectBy();
void thanks();
int main(void)
{
	    int n;
	    int a;
            printf("\n\t\t\t\t\t\t************************YOUR SEARCH ENDS HERE*************************\n");
	    printf("\n\t\t\t\t***Welcome to the online platform for learning and Registering for the Online Course***\n");
	    printf("\n\t\t\t\t\t\t##Where you discover new things and new passion##!!!\n");
	    printf("\n\t\t\t\t\t\t\t*^Follow the instrucions given below^*\n");
	    printf("Please select your role:\n");
	    printf("\n\t\t\t\t\tEnter 1 --> if your admin\n\t\t\t\t\t 2--> if your a user : ");
	    scanf("%d",&a);
	    getchar();
	    if(a==1)
	    {
		 adminlogin();
	    } 

	    else if (a==2)
	    {
label:	    printf("\n\t\t\t\t\tEnter\n\t\t\t\t\t 1-> Details of the courses available\n\t\t\t\t\t 2-> Register for free(New User)\n\t\t\t\t\t 3-> Sports \n\t\t\t\t\t 4-> Register for examination\n\t\t\t\t\t 5-> Contact Us\n\t\t\t\t\t 6-> Exit\n");
	    printf("\n\t\t\t\t\t\t************************\t*************************\n");
            scanf("%d",&n);
	    if(n==1)
	    {
		    courses();
	            goto label;
	    }
	    else if(n==2)
	    {
		    newRegistration();
		    goto label;
	    }
	    else if(n==3)
	    {
		    sports();
		    goto label;
	    }

            else if(n==4)
	    {
		    exam();
                    goto label;
            }
	    else if(n==5)
	    {
		    projectBy();
		    goto label;

	    }
	    else if(n==6)
	    {
		    thanks();
	    }
       }

	    return 0;
}
void adminlogin()
{

        	    char admin[6];
                   char passwrd[6];
                   printf("\t\t\tEnter your first name:");
                   gets(admin);
                   printf("\t\t\tEnter password:");
                   gets(passwrd);
                   if(((strcmp(admin,"zahid")) || (strcmp(admin,"shadab")) || (strcmp(admin,"divya")))  && (strcmp(passwrd,"vasavi")))
                   {
                            printf("\t\t\t\t ##You have entered incorrect password or You donot have access as admin\n");
                   }
                   else
                   {
                           printf("\n\t\t\t\tSuccessful Login\n");
			   adminOptions();
                   }
}
void adminOptions()
{
	int v;
label2:	printf("\n\t\t\t\tEnter 1--> Details of registration for respective courses\n\t\t\t\t2 --> Details of the registrations for the examinations\n\t\t\t\t3 --> Details of the courses available\n\t\t\t\t 4 --> Add new course\n\t\t\t\t5 --> save and exit");
	scanf("%d",&v);
	if(v==1)
	{
		cdetails();
		goto label2;
	}
	else if(v==2)
	{
		Edetails();
		goto label2;
	}
	else if(v==3)
	{
		courses();
		goto label2;
	}
	else if(v==4)
	{
		getchar();
		Newcourse();
		goto label2;
	}
	else if(v==5)
	{
		printf("\n\t\t\t\tThe changes you made if any are successfully saved and added to the user interface\t");
	
	}
	else
	{
		printf("YOU have entered an invaild option .Please recheck and select the option for the respective task");
		goto label2;
	}
}
void cdetails()
{

              FILE *fp4;
              char c;
              fp4=fopen("REGISTERED.txt","r");
              while((c=getc(fp4))!=EOF)
                      putchar(c);
              fclose(fp4);
}

void Edetails()
	{
	      FILE *fp5;
              char q;
              fp5=fopen("EXAMDETAIL.txt","r");
              while((q=getc(fp5))!=EOF)
                      putchar(q);
              fclose(fp5);
	}

void courses()
{

	      FILE *fp1;
              char ch;
              fp1=fopen("COURSEDETAIL.txt","r");
              while((ch=getc(fp1))!=EOF)
                      putchar(ch);
              fclose(fp1);
}

void Newcourse()
{
	FILE *fp7;
	fp7=fopen("COURSEDETAIL.txt","a");
	struct {
		char Cname[20];
		char SirName[20];
		char date[10];
		char Edate[10];
		char outcome[20];
	}r;
	printf("Enter the course name:");
	gets(r.Cname);
	printf("Press {Enter} to confirm ");
	getchar;
	printf("after enter the name who teaches %s online course:",r.Cname);
        gets(r.SirName);
	printf("Press {Enter} to confirm ");
        getchar;
	printf("after entering the starting date of the course:");
        gets(r.date);
        printf("Press {Enter} to confirm ");
	getchar();
	printf("after entering  the end date of the course:");
        gets(r.Edate);
        printf("Press {Enter} to confirm ");
	getchar();
	printf("after entering the course outcome:");
        gets(r.outcome);
        printf("Press {Enter} to confirm ");
	fprintf(fp7,"\n%s\t%s\t%s\t%s\t%s ",r.Cname,r.SirName,r.date,r.Edate,r.outcome);
	fclose(fp7);
}

void newRegistration()
{

 struct{
                            char first_name[20];
                            char last_name[20];
                            char gender;
                            char DOB[11];
                            char email[20];
                            char mobile_num[10];
                            char country[10];
                            int year;
                            char state[10];
                            char college[30];
                            char roll_no[15];
                            char branch[14];
                            char course[20];
                    }p;
                    FILE *fp2;
                    char ch;
                    getchar();
                    fp2=fopen("REGISTERED.txt","a");
                    printf("Enter your first name:");
                    scanf("%s",p.first_name);
                    getchar();
                    printf("Enter your last name:");
                    scanf("%s",p.last_name);
                    getchar();
                    printf("Enter your gender(M/F):");
                    scanf("%c",&p.gender);
                    getchar();
                    printf("Enter your Date of birth:");
                    gets(p.DOB);
                    printf("Press {Enter} button to continue");
                    getchar();
                    printf("Enter your email-id: ");
                    gets(p.email);
                    printf("Press {Enter} button to continue");
                    getchar();
                    printf("Enter your mobile number:");
                    scanf("%s",p.mobile_num);
                    getchar();
                    printf("Enter your state:");
                    gets(p.state);
                    printf("Press {Enter} button to continue");
                    getchar();
                    printf("Enter your country name:");
                    gets(p.country);
                    printf("Press {Enter} button to continue");
                    getchar();
                    printf("Enter your college name:");
                    gets(p.college);
                    printf("Press {Enter} button to continue");
                    getchar();
                    printf("Enter your roll-number:");
                    gets(p.roll_no);
                    printf("Press {Enter} button to continue");
                    getchar();
                    printf("Enter your branch you belong to :");
                    gets(p.branch);
                    printf("Press {Enter} button to continue");
		     getchar();
                    printf("Enter your graduation year:");
                    scanf("%d",&p.year);
                    getchar();
                    printf("\n\t\t\t\t\tYour details have been successfully saved please enter your course name:");
                    gets(p.course);
                    printf("\n\t\t\t\t\t^***You have registered for the %s course successfully***^\n",p.course);
                    printf("\t\t\t\t\t\t\t  ( ^_____^ )\n");
                    fprintf(fp2,"%s\t%s\t%c\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%d\t%s\n",p.first_name,p.last_name,p.gender,p.DOB,p.email,p.mobile_num,p.state,p.country,p.college,p.roll_no,p.branch,&p.year,p.course);
                    fclose(fp2);
}
void exam()
{
                    struct{
                            char first_name[20];
                            char last_name[20];
                            char gender;
                            char DOB[11];
                            char email[20];
                            char mobile_num[10];
                            char country[10];
                            int year;
                            char state[10];
                            char college[30];
                            char roll_no[15];
                            char branch[14];
                            char course[20];
                           }z;

                    FILE *fp3;
                    getchar();
                    fp3=fopen("EXAMDETAIL.txt","a");
                    printf("Enter your first name:");
                    scanf("%s",z.first_name);
                    getchar();
                    printf("Enter your last name:");
                    scanf("%s",z.last_name);
                    getchar();
                    printf("Enter your gender(M/F):");
                    scanf("%c",&z.gender);
                    getchar();
                    printf("Enter your Date of birth:");
                    gets(z.DOB);
                    printf("Press {Enter} button to continue");
                    getchar();
                    printf("Enter your email-id: ");
                    gets(z.email);
                    printf("Press {Enter} button to continue");
                    getchar();
                    printf("Enter your mobile number:");
                    scanf("%s",z.mobile_num);
                    getchar();
                    printf("Enter your state:");
		    gets(z.state);
                    printf("Press {Enter} button to continue");
                    getchar();
                    printf("Enter your country name:");
                    gets(z.country);
                    printf("Press {Enter} button to continue");
                    getchar();
                    printf("Enter your college name:");
                    gets(z.college);
                    printf("Press {Enter} button to continue");
                    getchar();
                    printf("Enter your roll-number:");
                    gets(z.roll_no);
                    printf("Press {Enter} button to continue");
                    getchar();
                    printf("Enter your branch you belong to :");
                    gets(z.branch);
                    printf("Press {Enter} button to continue");
                    getchar();
                    printf("Enter your graduation year:");
                    scanf("%d",&z.year);
		    getchar();
                    printf("\n\t\t\t\t\tYour details have been successfully saved please enter your course name to register for the respective examination:");
                    gets(z.course);
                    printf("\n\t\t\t\t\t^***You have registered for the %s exam successfully***^\n",z.course);
                    printf("\t\t\t\t\t\t\t\t\t  ( ^_____^ )\n");
                    fprintf(fp3,"%s\t%s\t%c\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%d\t%s\n",z.first_name,z.last_name,z.gender,z.DOB,z.email,z.mobile_num,z.state,z.country,z.college,z.roll_no,z.branch,&z.year,z.course);
                    fclose(fp3);
}
void sports()
{
        int z;
               printf("\nAbout sports: \n");
               printf("DO you want to take sports as a career option?");
  label3:      printf("\nWhich sport do you want to learn? \n");
               printf("1-->Basketball\n2-->football\n3-->Tennis\n4-->Cricket\n");
               scanf("%d",&z);
                       if(z==1){
                       printf("\nLearn from expert Mr Sirman narayana\n");
                       printf("Mr S.Narayan has been expert in teaching basketball since last 12 years and has trained many champions.");
                       printf("Contact: 9511008945 or Email:basketball@gmail.com");
                       }

                       else if(z==2)
                       {
                       printf("\nLearn from expert Mr Razzaq\n");
                       printf("\nMr RAzzaq has been expert in teaching Football since last 12 years and has trained many champions.");
                       printf("\nContact: 9511778945 or Email:football@gmail.com");
                       }
                        else if(z==3)
                       {
                       printf("\nLearn from expert Mrs Sania \n");
                       printf("\nMrs Sania  has been expert in teaching tennis since last 4 years and has trained many champions.");
                       printf("\nContact: 9511778945 or Email:tennis@gmail.com");

                       }
                       else if(z==4)

                       {
                       printf("\nLearn from expert Mr Rahul\n");
                       printf("\nMr Rahul  has been expert in teaching cricket since last 25 years and has trained many champions.");
                       printf("\nContact: 9511778945 or Email:cricket07@gmail.com");
                       }
                       else
                        {
                        printf("YOU have entered an invaild option .Please recheck and select the option for the respective task");
                        goto label3;
                        }
        }


void projectBy()
{
	 printf("\n\t\t\t****************\n");
                    printf("\n\t\t\tCreated By:-\n");

                    printf("\n\t\t\t@@***Khateeb Mohammed Zahid Parvez--IT/K-section--076--Vasavi college of enginering--9244466666\n ");

                    printf("\n\t\t\t@@***Mohammed Shadab Hussain-IT/K-section--082--Vasavi college of enginering--9846434211\n");

                    printf("\n\t\t\t***************\n");
}

void thanks()
{
	
                   printf("\n\t\t\t\t\t\t$$$$$$Thanks for using our mini-application$$$$$$\n\t\t\t\t\t\t$$$$$$Have a nice day$$$$$$\n") ;
                   printf("\t\t\t\t\t\t\t\t (^_____^)");
}

