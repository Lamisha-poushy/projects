void student_edit()
{

    p=head;
    int b_id,i=0;
    printf("\nEnter search id : ");
    scanf("%d",&b_id);
    FILE *fp;
    fp=fopen("restart.txt","w+");
    while(p!=NULL)
    {

        if(p->id==b_id)
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
            getchar();
            printf("Enter username : ");
            gets(username);
            printf("Enter password : ");
            gets(password);
            printf("Enter Blood group: ");
            gets(bg);
            printf("Enter sex (Male/Female) : ");
            gets(sex);
            printf("Enter Phone Number: ");
            gets(phone);
            printf("Enter age : ");
            gets(age);
            printf("Enter date: ");
            printf("Day(dd): ");
            gets(day);
            printf("Month(mm): ");
            gets(month);
            printf("Year(yy): ");
            gets(year);



            fprintf(fp,"%d ",p->id);
fprintf(fp,"%s   ",p->username);
        fprintf(fp,"%s   ",p->bg);
        fprintf(fp,"%s   ",p->sex);
        fprintf(fp,"%s   ",p->phone);
        fprintf(fp,"%d   ",p->age);
        fprintf(fp,"%d   ",p->day);
        fprintf(fp,"%d   ",p->month);
        fprintf(fp,"%d   ",p->year);
        fprintf(fp,"\n");
            printf("\n\t\t\t\t\t\t\tEdit successful");
            i++;
            getchar();
            getchar();
        }
        else
        {
                       fprintf(fp,"%d ",p->id);
fprintf(fp,"%s   ",p->username);
        fprintf(fp,"%s   ",p->bg);
        fprintf(fp,"%s   ",p->sex);
        fprintf(fp,"%s   ",p->phone);
        fprintf(fp,"%d   ",p->age);
        fprintf(fp,"%d   ",p->day);
        fprintf(fp,"%d   ",p->month);
        fprintf(fp,"%d   ",p->year);
        fprintf(fp,"\n");
        }
        p=p->next;
    }

