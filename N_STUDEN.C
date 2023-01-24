#include<stdio.h>
#include<conio.h>
#include<process.h>
#define SZ 10

struct student
{
   int rno,s1,s2,s3,total;
   char name[20];
   float per;
};

void DataEntery();
//void Update();
void AddRecord();
void Deletelast();
void Display();

struct student s[SZ];
int i=0,n=0;
void main()
{
	FILE *fp;

	int choice;
	clrscr();
	if(fp=='\0')
	{
		fprintf(fp,"\n unable to open");
	}
	do{
	clrscr();
	printf("\nProcess\n\n1->DataEntery\n2->Update\n3->Add a Record \n4->Deletelast\n5->Display\n0->Exit\n");
	printf("\n enter your choice:");
	scanf("%d",&choice);


	   switch(choice)
	   {
	    case 1 :
		   DataEntery();
		   getch();
		   break;
  /*	    case 2 :
		   updaterecord();
		   getch();
		   break;
    */
	    case 3 :
		   AddRecord();
		   getch();
		   break;
	    case 4 :
		   Deletelast();
		   getch();
		   break;
	    case 5 :
		   Display();
		   getch();
		   break;
	    case 0 :
		   getch();
		   exit(0);
	    default :
		   printf("\nPlease choose right choice");
		   break;
	   }clrscr();
	}while(1);
}

void DataEntery()
{
	FILE *fp;
	clrscr();
	printf("\n\t\t\tSTUDENT DATA ENTERY ");
	printf("\nEnter No. of Student for DataEntery :");
	scanf("%d",&n);
	fp=fopen("mystudent.txt","w");
		for(i=0;i<n;i++)
		{                    /* DATA ENTERY */
			printf("\n\t\t Enter Roll NO :");
			scanf("%d",&s[i].rno);
			fprintf(fp,"%d ",s[i].rno);

			printf("\nEnter Name :");
			fflush(stdin);
			gets(s[i].name);
			fputs(s[i].name,fp);

			printf("\nEnter mark of S1 :");scanf("%d",&s[i].s1);
			fprintf(fp," %d ",s[i].s1);
			printf("\nEnter mark of S2 :");scanf("%d",&s[i].s2);
			fprintf(fp,"%d ",s[i].s2);
			printf("\nEnter mark of S3 :");scanf("%d",&s[i].s3);
			fprintf(fp,"%d ",s[i].s3);
			s[i].total=s[i].s1+s[i].s2+s[i].s3;
			fprintf(fp,"%d ",s[i].total);
			s[i].per=s[i].total/3;
			fprintf(fp,"%f\n",s[i].per);
			getch();
//			fwrite(&s,sizeof(s),1,fp);
		}

	fclose(fp);
}

		       /*	UPDATE RECORD      */
/*void updaterecord()
{


	FILE *fp;
	struct student temp;
	clrscr();
	printf("\n\t\t\t UPDATE RECORD \n");
	printf("\nEnter Roll No. to Update Record :");
	scanf("%d",&temp.rno);
	fp=fopen("mystudent.txt","a");
	for(i=0;i<n;i++)
	{
	   if(temp.rno==s[i].rno)
	   {
	      printf("\nEnter New Name :");
	      fflush(stdin);
	      gets(temp.name);
	      fputs(temp.name,fp);
	      printf("\nEnter New Mark of S1 :");scanf("%d",&temp.s1);
	      fprintf(fp," %d ",temp.s1);
	      printf("\nEnter New Mark of S2 :");scanf("%d",&temp.s2);
	      fprintf(fp,"%d ",temp.s2);
	      printf("\nEnter New Mark of S3 :");scanf("%d",&temp.s3);
	      fprintf(fp,"%d ",temp.s3);
	      temp.total=temp.s1+temp.s2+temp.s3;
	      fprintf(fp,"%d ",temp.total);
	      temp.per=temp.total/3.0;
	     fprintf(fp,"%f\n",temp.per);
	      s[i]=temp;
	   }
	}
	fclose(fp);
}
*/
			/* ADD A NEW RECORD */
void AddRecord()
{
	      FILE *fp;
	      fp=fopen("mystudent.txt","a");


	      printf("\n\t\t\tADD A NEW RECORD \n");
	      printf("\n\t\t Enter Roll NO :");
	      scanf("%d ",&s[i].rno);
	      fprintf(fp,"%d",s[i].rno);
	      printf("\nEnter Name :");
	      fflush(stdin);
	      gets(s[i].name);
	      fputs(s[i].name,fp);
	      printf("\nEnter mark of S1 :");scanf("%d",&s[i].s1);
	      fprintf(fp," %d ",s[i].s1);

	      printf("\nEnter mark of S2 :");scanf("%d",&s[i].s2);
	      fprintf(fp,"%d ",s[i].s2);

	      printf("\nEnter mark of S3 :");scanf("%d",&s[i].s3);
	      fprintf(fp,"%d ",s[i].s3);

	      s[i].total=s[i].s1+s[i].s2+s[i].s3;
	      fprintf(fp,"%d ",s[i].total);
	      s[i].per=s[i].total/3;
	      fprintf(fp,"%f\n",s[i].per);
	      n++;
	      getch();
//	      fwrite(&s[i],sizeof(s),1,fp);

	      fclose(fp);
}



			/* DELETE A RECORD */
void Deletelast()
{
	FILE *fp;
	printf("\nLast Record will be Deleted ");

	fp=fopen("mystudent.txt","r");

	n--;

	fclose(fp);
	getch();



}

		      /* DISPLAY STUDENT DETAILS */
void Display()
{
	FILE *fp;
	fp=fopen("mystudent.txt","r");
	printf("\n\t\t\t    STUDENT DETAILS\n");
	printf("\nRNO\tNAME\tS1\tS2\tS3\tTOTAL\tPER");
	for(i=0;i<n;i++)
	{
		printf("\n%5d\t%4s\t4%d\t%4d\t%4d\t%4d\t%4f",s[i].rno,s[i].name,s[i].s1,s[i].s2,s[i].s3,s[i].total,s[i].per);
	  //	fprintf(fp,"\n%5d\t%4s\t4%d\t%4d\t%4d\t%4d\t%4f",s[i].rno,s[i].name,s[i].s1,s[i].s2,s[i].s3,s[i].total,s[i].per);
	}
	fclose(fp);
}

