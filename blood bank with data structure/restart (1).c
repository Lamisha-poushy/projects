#include<stdio.h>
#include<conio.h>
#include<string.h>
char username[100];
char password[100];
char c;
FILE *fp;
struct node
{
    int id;
    char username[100];
    char password[100];
    char bg[3];
    char phone[15];
    char sex[7];
    int age;
    int day;
    int month;
    int year;

    struct node *next;
};
typedef struct node N;
N *head,*tail,*p,*temp,*n;
void create()
{
    head=(N*)malloc(sizeof(N));
    int value;
    tail=head;
    int node_no =1;


    while(1)
    {
        printf("Enter data<-10 to END>=");
        scanf("%d",&value);
        if(value== -10)
        {
            break;
        }
        else
        {
            temp=(struct node *)malloc(sizeof(struct node));
            temp->id=value;
            printf("\n");
            printf("Enter username : ");
            scanf("%s",temp->username);
            printf("Enter password : ");
            scanf("%s",temp->password);
            printf("Enter Blood group: ");
            scanf("%s",temp->bg);
            printf("Enter sex (Male/Female) : ");
            scanf("%s",temp->sex);
            printf("Enter Phone Number: ");
            scanf("%s",temp->phone);
            printf("Enter age : ");
            scanf("%d",&temp->age);
            printf("Enter date: ");
            printf("Day(dd): ");
            scanf("%d",&temp->day);
            printf("Month(mm): ");
            scanf("%d",&temp->month);
            printf("Year(yy): ");
            scanf("%d",&temp->year);
            temp->next=NULL;
            tail->next=temp;
            tail=temp;
            if(node_no == 1)
                head = temp;

        }
        node_no++;

        fp=fopen("restart.txt","a");

        //if(fp==NULL)
  //{
  // fp=fopen("restart.txt","w+");
   //if(fp==NULL)
   //{
  //  puts("can not open file");
   // exit(1);
   //}
 // }
        fprintf(fp,"%d   ",temp->id);
        fprintf(fp,"%s   ",temp->username);
        fprintf(fp,"%s   ",temp->bg);
        fprintf(fp,"%s   ",temp->sex);
        fprintf(fp,"%s   ",temp->phone);
        fprintf(fp,"%d   ",temp->age);
        fprintf(fp,"%d   ",temp->day);
         fprintf(fp,"%d   ",temp->month);
         fprintf(fp,"%d   ",temp->year);
        fprintf(fp,"\n");

        fclose(fp);
        }
    }

void insert(struct node *p)
{
    p=head;
    n=(struct node*)malloc(sizeof(struct node));
    printf("Enter your ID :\n");
    scanf("%d",&n->id);

    printf("Enter username : ");
    scanf("%s",n->username);
    printf("Enter password : ");
    scanf("%s",n->password);
    printf("Enter Date of donation: ");
    printf("Day(dd): ");
    scanf("%d",&n->day);
    printf("Month(mm): ");
    scanf("%d",&n->month);
    printf("Year(yy): ");
    scanf("%d",&n->year);
    printf("Enter Age : ");
    scanf("%d",&n->age);

    printf("Enter Phone Number : ");
    scanf("%s",n->phone);
    printf("Enter Sex(Male/Female) : ");
    scanf("%s",n->sex);
    printf("Enter Blood Group : ");
    scanf("%s",n->bg);
    n->next=head;
    head=n;


    fp=fopen("restart.txt","a");

   //  if(fp==NULL)
  //{
  // fp=fopen("restart.txt","w+");
  // if(fp==NULL)
  // {
   // puts("can not open file");
   // exit(1);
  //// }
 // }
        fprintf(fp,"%d   ",n->id);
        fprintf(fp,"%s   ",n->username);
        fprintf(fp,"%s   ",n->bg);
        fprintf(fp,"%s   ",n->sex);
        fprintf(fp,"%s   ",n->phone);
        fprintf(fp,"%d   ",n->age);
        fprintf(fp,"%d   ",n->day);
        fprintf(fp,"%d   ",n->month);
        fprintf(fp,"%d   ",n->year);
        fprintf(fp,"\n");

        fclose(fp);

}
void display()
{
    printf("List : ");

    fp=fopen("restart.txt","r");
   // while((fscanf(fp,"%d  %s  %s  %s  %s  %d  %d  %d  %d",&temp->id,temp->username,temp->bg,temp->sex,&temp->age,&temp->day,&temp->month,&temp->year)))
  //     {
  //  printf("%d   ",temp->id);
    //    printf("%s   ",temp->username);
     //   printf("%s   ",temp->bg);
      //  printf("%s   ",temp->sex);
      //  printf("%s   ",temp->phone);
      //  printf("%d   ",temp->age);
      //  printf(fp,"%d/%d/%d",temp->day,temp->month,temp->year);

       //printf("\n");
  //  }
c=fgetc(fp);
while(c!= EOF)
{
    printf("%c",c);
    c=fgetc(fp);
}
fclose(fp);
}
void ask_admin()
{
    printf("Enter the Username :\n");
    scanf("%s",username);
    printf("\nEnter the Password :\n");
    scanf("%s",password);
}
void check_admin()
{
    if(strcmp(username,"esty" )==0)
    {
        printf("\nUsername correct\n");
    }
    else if(strcmp(username,"poushy" )==0)
    {
        printf("\nUsername correct\n");
    }
    else if(strcmp(username,"munshat" )==0)
    {
        printf("\nUsername correct\n");
    }
    else
    {
        printf("\nUsername Incorrect\n");
    }
    if(strcmp(password,"esty579")==0)
    {
        printf("Password Correct\n");
    }
    else
    {
        printf("Password Incorrect");
    }

}
void ask_user()
{
    printf("Enter the Username :\n");
    scanf("%s",username);
    printf("\nEnter the Password :\n");
    scanf("%s",password);
}
void check_user()
{
    if(strcmp(username,"esty")==0)
    {
        printf("\nUsername correct\n");
    }
    else if(strcmp(username,"poushy")==0)
    {
        printf("\nUsername correct\n");
    }
    else if(strcmp(username,"munshat")==0)
    {
        printf("\nUsername correct\n");
    }
    else
    {
        printf("\nUsername Incorrect\n");
    }
    if(strcmp(password,"esty579")==0)
    {
        printf("Password Correct\n");
    }
    else
    {
        printf("Password Incorrect");
    }
}
void admin()
{
    printf("\n\t\tWELLCOME TO OUR Blood Bank Management System\n");
        printf("\n");
        printf("\t\t\t\tAdmin View\n");
        printf("\n");
        printf("\t\t1.  Create a new profile\n");
        printf("\t\t2.  Insert a new profile\n");
        printf("\t\t3.  Display User List\n");
        printf("\t\t4. Exit\n");
        printf("\t\t5.  Display Admin Details\n");
        printf("\t\t6.  Display Admin List\n");
        printf("\t\t7.  Search Donor by ID\n");
        printf("\t\t8.  Search by Blood Group\n");
        printf("\t\t9.  Update Admin Profile\n");
        printf("\t\t10.  Update User Information\n");

        printf("\t\t11. Delete A Profile\n");
        printf("\t\t12. Search Donor Availability\n");



        int choice;
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
        {
          create();
          admin();
            break;

        }
        case 2:
            {
                insert(head);
                admin();
                break;
            }
        case 3:
            {
                display();
                admin();
                break;
            }
        case 4:
            {
                break;
            }
        }

        }





void main()
{
    int value;
A:
    printf("\t\t\t\tLogin\n\n");
    printf("\t\t\t1. As Admin\n");
    printf("\t\t\t2. As User\n");

    printf("\n\t\tEnter the Choice : ");
    scanf("%d",&value);
    switch(value)
    {
    case 1:
    {
        ask_admin();
        check_admin();
        system("cls");
        printf("\n");
        admin();
        break;
        }




    case 2:
    {
        ask_user();
        check_user();
        system("cls");
        printf("\n\t\tWELLCOME TO OUR Blood Bank Management System\n");
        printf("\n");
        printf("\t\t1. Search A Profile\n");
        printf("\t\t2. Update Profile Information\n");
        printf("\t\t3. Search Donor by Blood Group\n");
        printf("\t\t4. Search Available DOnor\n");
        printf("\t\t5. Display Donor List\n");
        break;

    }
    default :
    {
        printf("\n\t\tInvalid Number\n");
        goto A;
    }
    }



    return 0;
}
