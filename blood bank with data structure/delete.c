void delete()
{

    FILE *fp;
    fp=fopen("restart.txt","r");
    head=(N*)malloc(sizeof(N));
    tail=head;
    int i=1;
    while(1)
    {
        if(feof (fp) )
        {
            break;
        }
        temp=(N*)malloc(sizeof(N));

        fscanf(fp,"%d %s %s %d %d %d %d %s %s %s",&temp->id,&temp->username,&temp->password,&temp->day,&temp->month,&temp->year,&temp->age,&temp->phone,&temp->sex,&temp->bg);
        tail->next=temp;
        temp->pre=tail;
        temp->next=NULL;
        tail=temp;
        if(i==1)
        {
            head=temp;

        }

        i++;
    }

    if(tail==head)
    {
        tail=NULL;
    }
    else
    {
        tail=tail->pre;
        tail->next=NULL;
    }

    fclose(fp);




    int l;
ID:
    printf("Enter Id that you want to delete\n");
    scanf("%d",&l);
    int j;

    if(head->id  ==l)
    {
        head=head->next;
        head->pre=NULL;
        FILE *fp;
    fp=fopen("restart.txt","w");
    p=head;
    for(p=head; p!=NULL; p=p->next)
    {

         fprintf(fp,"%d %s %s %d %d %d %d %s %s %s",temp->id,temp->username,temp->password,temp->day,temp->month,temp->year,temp->age,temp->phone,temp->sex,temp->bg);
    }
    fclose(fp);

    }
    else if(tail->id==l)
    {
        tail=tail->pre;
        tail->next=NULL;
        printb();

    }
    else
    {
        for(p=head ; p->next->id!=l;)
        {

            if( p->next->next ==NULL)
            {
                system("cls");
                printf("Not found\nPlease Enter valid ID\n\n\n\t" );
                goto ID;
            }
            else
            {
                p=p->next;
            }
        }


        q=p->next->next;
        p->next=q;
        q->pre=p;
       FILE *fp;
    fp=fopen("restart.txt","w");
    p=head;
    for(p=head; p!=NULL; p=p->next)
    {

        fprintf(fp,"%d %s %s %d %d %d %d %s %s %s",temp->id,temp->username,temp->password,temp->day,temp->month,temp->year,temp->age,temp->phone,temp->sex,temp->bg);
    }
    fclose(fp);

    }
}
