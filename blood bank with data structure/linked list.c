#include<stdio.h>
#include<string.h>

struct node
{
    int id;
    char name[15];
    char phone[15];
    struct node *next;
    struct node *prev;
}*head,*student,*temp,*tail,*p,*q,*s;

void profile()
{

    q=head;
    int s_id;
    printf("\nEnter search student id : ");
    scanf("%d",&s_id);
    while(q!=NULL)
    {
        if(q->id==s_id)
        {

            printf("\n\nID : ");
            printf("%d",q->id);

            printf("\nName : ");
            puts(q->name);

            printf("Number : ");
            printf("%s\n",q->phone);
        }

        q=q->next;
    }
}


void input()
{
    head=(struct node *)malloc(sizeof(struct node));
    tail = head;
    FILE *fp;
    fp=fopen("Student portal.txt","r");
    int node_no = 1;
    while(1)
    {
        if( feof(fp) )
        {
            break ;
        }
        student=(struct node *)malloc(sizeof(struct node));

        fscanf(fp,"%d",&student->id);

        fscanf(fp,"%s",&student->name);

        fscanf(fp,"%s",&student->phone);


        student->next=NULL;
        student->prev=tail;
        tail->next=student;
        tail=student;
        if(node_no ==1)
        {
            head=student;
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
    profile();
}

void student_edit()
{

    p=head;
    int s_id,i=0;
    printf("\nEnter search student id : ");
    scanf("%d",&s_id);
    FILE *fp;
    fp=fopen("Student portal.txt","w+");
    while(p!=NULL)
    {

        if(p->id==s_id)
        {
            char name[20],phone[15];
            getchar();
            printf("\tEnter name(Single name) : ");
            gets(name);
            printf("\tEnter phone number : ");
            gets(phone);



            fprintf(fp,"%d ",p->id);

            fprintf(fp,"%s ",name);

            fprintf(fp,"%s ",phone);

            printf("\n\t\t\t\t\t\t\tEdit successful");
            i++;
            getchar();
            getchar();
        }
        else
        {
            fprintf(fp,"%d ",p->id);

            fprintf(fp,"%s ",p->name);

            fprintf(fp,"%s ",p->phone);

        }
        p=p->next;
    }

    fclose(fp);
    if(i==0)
    {
        printf("\n\t\t\t\t\t\t\tNot found");
        getchar();
        getchar();
    }
    input();
}
void student_del()
{

    p=head;

    int s_id,i=0;
    printf("\nEnter search student id : ");
    scanf("%d",&s_id);
    FILE *fp;
    fp=fopen("Student portal.txt","w+");
    while(p!=NULL)
    {

        if(p->id==s_id)
        {
            printf("\nDelete successful");
            i++;
            getchar();
            getchar();
        }
        else
        {
            fprintf(fp,"%d ",p->id);

            fprintf(fp,"%s ",p->name);

            fprintf(fp,"%s ",p->phone);

        }
        p=p->next;
    }
    fclose(fp);

    if(i==0)
    {
        printf("\nNot found");
        getchar();
        getchar();
    }
    input();

}
void sinup()
{




    int id;
    char name[15],phone[15];
    printf("\nEnter your name : ");
    gets(name);

    printf("\nEnter your Phone Number : ");
    scanf("%s",&phone);
    printf("\nEnter your ID : ");
    scanf("%s",&id);


    FILE *fp;
    fp=fopen("Student portal.txt","a+");
    fprintf(fp,"%d ",id);

    fprintf(fp,"%s ",name);

    fprintf(fp,"%s ",phone);

    fclose(fp);
    system("cls");


}
void main()
{
    system("COLOR 0A");

    input();


}
