#include<stdio.h>
#include<conio.h>
#include<string.h>

char username[100];
char password[100];
struct node
{
    struct node *prev;
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

struct node *head,*tail,*p,*temp,*t;

void insert()
{
    temp=(struct node*)malloc(sizeof(struct node));
    head=temp;
    printf("Enter your ID :\n");
    scanf("%d",&temp->id);

    printf("Enter username : ");
    scanf("%s",&temp->username);
    printf("Enter password : ");
    scanf("%s",&temp->password);
    printf("Enter Date of donation: ");
    printf("Day(dd): ");
    scanf("%d",&temp->day);
    printf("Month(mm): ");
    scanf("%d",&temp->month);
    printf("Year(yy): ");
    scanf("%d",&temp->year);
    printf("Enter Age : ");
    scanf("%d",&temp->age);
    printf("Enter Phone Number : ");
    scanf("%s",&temp->phone);
    printf("Enter Sex(Male/Female) : ");
    scanf("%s",&temp->sex);
    printf("Enter Blood Group : ");
    scanf("%s",&temp->bg);
    temp->next=NULL;
    display_file(temp);

}
void display_file(struct node *p)
{
    FILE *NCU;
    NCU=fopen("data.txt","a+");
    for(p=p; p!=NULL; p=p->next)
    {
        fprintf(NCU,"%d %s %s %d %d %d %d %s %s %s\n",p->id,p->username,p->password,p->day,p->month,p->year,p->age,p->phone,p->sex,p->bg);
    }

    fclose(NCU);

}
void linked_list()
{
    head=(struct node *)malloc(sizeof(struct node));
    tail = head;
    FILE *fp;
    fp=fopen("data.txt","r");
    int node_no = 1;
    while(1)
    {
        if( feof(fp) )
        {
            break ;
        }
        temp=(struct node *)malloc(sizeof(struct node));
        fscanf(fp,"%d %s %s %d %d %d %d %s %s %s",&temp->id,&temp->username,&temp->password,&temp->day,&temp->month,&temp->year,&temp->age,&temp->phone,&temp->sex,&temp->bg);


        temp->next=NULL;
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
        if(node_no ==1)
        {
            head=temp;
        }


        node_no++;
    }
    if(tail==head)
    {
        tail=NULL;
    }
    else
    {
        tail=tail->prev;
        tail->next=NULL;
    }
    fclose(fp);
}
void search_id()
{
    int j;
    printf("\nEnter Id Number : ");
    scanf("%d",&j);

    linked_list();
    p=head;
    while(p->id!=j)
    {
        p=p->next;

    }

    printf("%d   ",p->id);
    printf("%s   ",p->username);
    printf("%s   ",p->bg);
    printf("%s   ",p->sex);
    printf("%s   ",p->phone);
    printf("%d   ",p->age);
    printf("%d/%d/%d   ",p->day,p->month,p->year);
    printf("\n");
}
void search_bg()
{
    char b[10];
    int j;
    j=0;
    printf("\nEnter Blood : ");
    scanf("%s",&b);

    linked_list();
    p=head;
    while(p!=NULL)
    {
        if(strcmp(b,p->bg)==0)
        {
            j=1;
            break;
        }
        p=p->next;
    }
    if(j==1)
    {
    printf("%d   ",p->id);
    printf("%s   ",p->username);
    printf("%s   ",p->bg);
    printf("%s   ",p->sex);
    printf("%s   ",p->phone);
    printf("%d   ",p->age);
    printf("%d   ",p->day);
    printf("%d   ",p->month);
    printf("%d   ",p->year);
    printf("\n");
    }

}

void update_info()
{
    int h;
    printf("Enter the id you want to update: ");
    scanf("%d",&h);
    linked_list();
    p=head;
    while(p!=NULL)
    {
        if(p->id==h)
        {
            printf("Enter your ID :\n");
            scanf("%d",&p->id);

            printf("Enter username : ");
            scanf("%s",p->username);

            printf("Enter Date of donation: ");
            printf("Day(dd): ");
            scanf("%d",&p->day);
            printf("Month(mm): ");
            scanf("%d",&p->month);
            printf("Year(yy): ");
            scanf("%d",&p->year);
            printf("Enter Age : ");
            scanf("%d",&p->age);
            printf("Enter Phone Number : ");
            scanf("%s",p->phone);
            printf("Enter Sex(Male/Female) : ");
            scanf("%s",p->sex);
            printf("Enter Blood Group : ");
            scanf("%s",p->bg);


            p=head;
    FILE *HU;
    HU=fopen("data.txt","w");
    for(p=p; p!=NULL; p=p->next)
    {
        fprintf(HU,"%d %s %s %s %s %s %d %d %d %d\n",p->id,p->username,p->password,p->bg,p->sex,p->phone,p->age,p->day,p->month,p->year);
    }

    fclose(HU);
break;
        }
        p=p->next;
    }

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

    printf("\t\t\t\tAdmin View\n");
    printf("\n");

    printf("\t\t1.  Insert a new profile\n");
    printf("\t\t2.  Display User List\n");


    printf("\t\t3.  Search Donor by ID\n");
    printf("\t\t4.  Search by Blood Group\n");
    printf("\t\t5.  Update Profile Information\n");


    printf("\t\t6.  Delete A Profile\n");
    printf("\t\t7.  Search Donor Availability\n");
    printf("\t\t8.  Exit\n");



    int choice;
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {

    case 1:
    {
        insert();
        admin();
        break;
    }
    case 2:
    {
        admin();
        break;
    }
    case 3:
    {
        search_id();
        admin();
        break;
    }
    case 4:
    {
        search_bg();
        admin();
        break;
    }
    case 5:
        {
            update_info();
            admin();
            break;
        }
    case 7:
        {
            admin();
            break;
        }
    case 8:
        {
            break;
        }
    }

}
void user()
{
    printf("\t\t\tUser View\n");
    printf("\n");
    printf("\t\t1. Search A Profile by ID\n");
        printf("\t\t2. Update Profile Information\n");
        printf("\t\t3. Search Donor by Blood Group\n");
        printf("\t\t4. Search Available DOnor\n");
        printf("\t\t5. Display Donor List\n");
        printf("\t\t6. Exit\n");
        int choice;
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            search_id();
            user();
            break;
        }
    case 2:
        {
            update_info();
            user();
            break;
        }
    case 3:
        {
            search_bg();
            user();
            break;
        }
    case 4:
        {
            user();
            break;
        }
    case 5:
        {
            user();
            break;
        }
    case 6:
        {
            break;
        }
    }

}void main()
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
        printf("\n\t\tWELLCOME TO OUR Blood Bank Management System\n");
        printf("\n");
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
        printf("\n");
        user();
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

