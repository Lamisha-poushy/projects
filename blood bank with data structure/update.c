void modify()
{
    int c;
int i=0;
    printf("\n\t\tEnter blood group to update:");
    scanf("%d", &id);
    p=head;
while(p!=NULL){
    if(p->id==c)
    {
  printf("%d   ",temp->id);
        printf("%s   ",temp->username);
        printf("%s   ",temp->bg);
        printf("%s   ",temp->sex);
        printf("%s   ",temp->phone);
        printf("%d   ",temp->age);
        printf("%d/%d/%d   ",temp->day,temp->month,temp->year);
    }
    p=p->next;
}
FILE *fp;
fp=fopen("restart.txt", "w");
p=head;
while(p!=NULL)

{
    fprintf(fp,"%d   ",temp->id);
        fprintf(fp,"%s   ",temp->username);
        fprintf(fp,"%s   ",temp->bg);
        fprintf(fp,"%s   ",temp->sex);
        fprintf(fp,"%s   ",temp->phone);
        fprintf(fp,"%d   ",temp->age);
        fprintf(fp,"%d/%d/%d   ",temp->day,temp->month,temp->year);
    }
p=p->next;
}

fclose(fp);

}
void  edit()
{
    head=(N*)malloc(sizeof(N));
    tail = head;
    FILE *fp;
    fp=fopen("restart.txt","r");
    int node_no = 1;
    while(1)
    {
        if( feof(fp) )
        {
            break ;
        }
        student=(struct record *)malloc(sizeof(struct record));

        fscanf(fp,"%d   ",temp->id);
        fscanf(fp,"%s   ",temp->username);
        fscanf(fp,"%s   ",temp->bg);
        fscanf(fp,"%s   ",temp->sex);
        fscanf(fp,"%s   ",temp->phone);
        fscanf(fp,"%d   ",temp->age);
        fscanf(fp,"%d/%d/%d   ",temp->day,temp->month,temp->year);

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
    modify();

}

