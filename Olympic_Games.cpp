#include<time.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void SIGNUP();
void SIGNIN();
int DELAY(int);
int calculate(int len);
int main()
{

while(1)
{
printf("\t\t\tWELCOME TO THE ARENA\n\n\n");
    printf("\t\t\tHAVE YOUR PICK!!!\n\n");
    printf("\t\t\t1 for SIGN UP\n\t\t\t2 for SIGN IN\n\t\t\t3 for Exit\n");
    char ch;
    scanf("%d",&ch);
     switch(ch)
        {
        case 1: system("cls");
               SIGNUP();
               break;
        case 2: system("cls");
             SIGNIN();
                 break;
        case 3: system("cls");
                  printf("\n\n\t\t\tCOME BACK SOON!!");
                  exit(0);
                  break;
         default:  system("cls");
                   printf("\n\n\t\t\tARENA IS CLOSED OFF UNTILL YOU MAKE A RIGHT PICK!!!");
                   exit(0);
                   break;

    }}}void SIGNUP()
    {    int lg,low;
        system("cls");
        char USER[100],PASS[100],CHECK[100];
        FILE *fp;
        fp=fopen("SAMPLE.txt","a");
       printf("\t\t\tUSERNAME:");
       scanf("%s",USER);
       fprintf(fp,"%s\t",USER);
       printf("\n\t\t\tPASSWORD:");
       scanf("%s",PASS);
       fprintf(fp,"%s\n",PASS);
       fclose(fp);
       system("cls");
       printf("\n\t\t\tCONFIRM PASSWORD:");
       scanf("%s",CHECK);
       system("cls");
       lg=strcmp(PASS,CHECK);
       if(lg==0)
       {
           printf("\n\n\t\tEXPLORE YOUR LOVE FOR CROSSWORDS WITH ARENA");
       }
       else
        {printf("\n\n\t\tOOPS!THEY DON'T MATCH...TRY AGAIN");}
        system("cls");
      printf("\t\t\tDO YOU WISH TO CONTINUE???\n\n\n\t\tPRESS 1 TO CONTINUE\n\t\tPRESS ANY KEY TO EXIT ");
       scanf("%d",&low);
       system("cls");

    }

    void SIGNIN()
    { system("cls");
    char USER[100],PASS[100],STRING1[100],STRING2[100];
    printf("\t\t\tUSERNAME:");
    scanf("%s",USER);
    printf("\n\t\t\tPASSWORD:");
    char ch;
    int i=0;
    while((ch=getch())!=13)
    {  PASS[i]=ch;
    printf("*");
    i++;
    }
    PASS[i]='\0';
    int flag;
    FILE *fp;
    fp=fopen("SAMPLE.txt","r");
    while(fscanf(fp,"%s\t%s",STRING1,STRING2)!=-1)
    {
        if((strcmp(USER,STRING1)==0)&&(strcmp(PASS,STRING2)==0))
        {   flag=1;
        }
        else
           {
               flag=0;
           }
    }
           if(flag==1)
           {system("cls");
            printf("\n\t\t\tLOADING");
            int j;
            for(i=0;i<3;i++)
            {
                DELAY(1);
                printf("..");
            }
            system("cls");
            int game;
            while(2)
            {
    printf("\n\n\n\n\n\n\n\t\t\t||YOU HAVE SUCCESSFULLY ENTERED THE ARENA||");
    printf("\n\n\n\t\t\t1 for INSTRUCTION\n\t\t\t2 for WATCHING OLYMPICS\n\t\t\t3 for Exit\n");
    scanf("%d",&game);
    system("cls");
    switch(game)
    {
        case 1:
                {printf("\n\n\n\n\n\t\t**************INSTRUCTIONS***************\n\n\n\t(1) ONLY WORDS IN CAPITAL LETTERS WILL EARN YOU POINT!\n\n\t(2) NO POINTS ARE AWARDED FOR REPEATED WORDS!\n\n\t(3) POINTS AWARDIND SCHEME IS AS FOLLOW:\n");
                 printf("\n\t#WORD WITH 1 TO 4 CHARACTERS WILL GET YOU 25 POINTS!\n\t #WORD WITH 5 TO 8 CHARACTERS WILL GET YOU 55 POINTS!\n\t#WORD WITH 9 TO 12 CHARACTERS WILL GET YOU 75 POINTS!\n\t #WORDS WITH MORE THAN 12 CHARACTERS WILL GET YOU 100 POINTS!");
                 printf("\n\n\n\t(4) ALL PUZZLES ARE THEME SPECIFIC AS SUGGESTED BY THIR NAMES!");
                 printf("\n\n\n\n\t\t*******************************************");
                 int high;
                 printf("\n\n\nDO YOU WISH TO GO BACK TO DASHBOARD??PRESS 2\n");
                 scanf("%d",&high);
                 system("cls");
                  break;}
        case 2:{
            char A[14]={'M','G','N','I','L','T','S','E','R','W','L','R','G','B'};
     char   B[14]={'O','Y','L','N','A','R','G','N','I','E','O','N','A','C'};
     char    C[14]={'U','M','L','V','I','I','O','N','C','W','I','D','B','H'};
     char   D[14]= {'N','N','A','O','Y','A','O','A','I','C','M','A','A','A'};
     char   E[14]= {'T','A','B','L','E','T','E','N','N','I','S','N','R','B'};
     char  F[14]= {'A','S','T','L','K','H','G','E','N','K','D','C','O','S'};
     char G[14]={'I','T','O','E','C','L','F','T','E','B','H','X','L','C'};
     char H[14]={'N','I','O','Y','O','O','O','T','A','E','I','M','O','I'};
     char I[14]={'B','C','F','B','H','N','B','L','R','N','G','B','P','T'};
     char J[14]={'I','S','J','A','D','A','L','Y','G','I','A','L','R','E'};
     char K[14]={'K','O','U','L','L','G','N','I','T','N','E','V','E','L'};
     char L[14]={'I','I','D','L','E','G','A','S','S','E','R','D','T','H'};
     char M[14]={'N','L','O','A','I','O','D','N','O','W','K','E','A','T'};
     char N[14]={'G','N','I','T','F','I','L','T','H','G','I','E','W','A'};
     printf("\t\t\t\t\tWATCHING THE OLYMPICS\n\n");
     printf("\t\t\t  ");
     for(int i=0;i<14;i++)
    {
      printf("-  ");
    }
    printf("\n");
     printf("\t\t\t| ");
    for(int i=0;i<14;i++)
    {
      printf("%c  ",A[i]);
    }
    printf("\b|\n\t\t\t| ");
     for(int i=0;i<14;i++)
    {
      printf("%c  ",B[i]);
    }
    printf("\b|\n\t\t\t| ");
     for(int i=0;i<14;i++)
    {
      printf("%c  ",C[i]);
    }
    printf("\b|\n\t\t\t| ");
     for(int i=0;i<14;i++)
    {
      printf("%c  ",D[i]);
    }
    printf("\b|\n\t\t\t| ");
     for(int i=0;i<14;i++)
    {
      printf("%c  ",E[i]);
    }
    printf("\b|\n\t\t\t| ");
     for(int i=0;i<14;i++)
   {
      printf("%c  ",F[i]);
    }
    printf("\b|\n\t\t\t| ");
     for(int i=0;i<14;i++)
   {
      printf("%c  ",G[i]);
    }
    printf("\b|\n\t\t\t| ");
     for(int i=0;i<14;i++)
   {
      printf("%c  ",H[i]);
    }
    printf("\b|\n\t\t\t| ");
     for(int i=0;i<14;i++)
   {
      printf("%c  ",I[i]);
    }
    printf("\b|\n\t\t\t| ");
     for(int i=0;i<14;i++)
   {
      printf("%c  ",J[i]);
    }
    printf("\b|\n\t\t\t| ");
     for(int i=0;i<14;i++)
   {
      printf("%c  ",K[i]);
    }
    printf("\b|\n\t\t\t| ");
     for(int i=0;i<14;i++)
   {
      printf("%c  ",L[i]);
    }
    printf("\b|\n\t\t\t| ");
     for(int i=0;i<14;i++)
   {
      printf("%c  ",M[i]);
    }
    printf("\b|\n\t\t\t| ");
     for(int i=0;i<14;i++)
   {
      printf("%c  ",N[i]);
    }
    printf("\b|\n\t\t\t  ");
     for(int i=0;i<14;i++)
    {
      printf("-  ");
    }
    printf("\n\n");
    printf("\t\t\t\t\tGIVE IT A GO!\n\t\t\tSHOW ME WHAT YOU GOT IN THREE TRIALS(>_<)\n\n\n");

    int t=3;
    char a[100]="ARCHERY";
char b[100]="ATHELETICS";
char c[100]="BADMINTON";
char d[100]="BASKETBALL";
char e[100]="BMX";
char f[100]="BOXING";
char g[100]="CANOEING";
char h[100]="DRESSAGE";
char i[100]="EVENTING";
char j[100]="FENCING";
char k[100]="FIELDHOCKEY";
char l[100]="FOOTBALL";
char m[100]="GYMNASTICS";
char n[100]="HANDBALL";
char o[100]="JUDO";
char p[100]="MOUNTAINBIKING";
char q[100]="ROWING";
char r[100]="TABLETENNIS";
char s[100]="TRIATHLON";
char y[100]="VOLLEYBALL";
char u[100]="WATERPOLO";
char v[100]="WEIGHTLIFTING";
char w[100]="WRESTLING";
char x[100]="TAEKWONDO";
int mid[3];
int A1=0,A2=0,A3=0,A4=0,A5=0,A6=0,A7=0,A8=0,B1=0,B2=0,B3=0,B4=0,B5=0,B6=0,B7=0,B8=0,C1=0,C2=0,C3=0,C4=0,C5=0,C6=0,C7=0,C8=0;
   char WORD[100];
    while(t--)
    {
        int point;
      int R1,R2,R3,R4,R5,R6,R7,R8,P1,P2,P3,P4,P5,P6,P7,P8,W1,W2,W3,W4,W5,W6,W7,W8;
        int len;
      printf(">>>");
      scanf("%s",WORD);
     len=strlen(WORD);
     R1=strcmp(WORD,a);
      R2=strcmp(WORD,b);
      R3=strcmp(WORD,c);
      R4=strcmp(WORD,d);
      R5=strcmp(WORD,e);
      R6=strcmp(WORD,f);
      R7=strcmp(WORD,g);
      R8=strcmp(WORD,h);
      P1=strcmp(WORD,i);
      P2=strcmp(WORD,j);
      P3=strcmp(WORD,k);
      P4=strcmp(WORD,l);
      P5=strcmp(WORD,m);
      P6=strcmp(WORD,n);
      P7=strcmp(WORD,o);
      P8=strcmp(WORD,p);
      W1=strcmp(WORD,q);
      W2=strcmp(WORD,r);
      W3=strcmp(WORD,s);
      W4=strcmp(WORD,y);
      W5=strcmp(WORD,u);
      W6=strcmp(WORD,v);
      W7=strcmp(WORD,w);
      W8=strcmp(WORD,x);


       if((R1!=0)&&(R2!=0)&&(R3!=0)&&(R4!=0)&&(R5!=0)&&(R6!=0)&&(R7!=0)&&(R8!=0)&&(P1!=0)&&(P2!=0)&&(P3!=0)&&(P4!=0)&&(P5!=0)&&(P6!=0)&&(P7!=0)&&(P8!=0)&&(W1!=0)&&(W2!=0)&&(W3!=0)&&(W4!=0)&&(W5!=0)&&(W6!=0)&&(W7!=0)&&(W8!=0))
       {point=0;
        printf("\t\t\tBUCKLE UP GREENIE!\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD.\n\n",point);
       }
       else
       {
          if(R1==0)
      {
          ++A1;
          if(A1!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED!\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD.\n\n",point);
          }
          else
            {
         point= calculate(len);
          printf("\n\n\t\t\t\tNOT BAD!\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }}
      if(R2==0)
      {
          A2++;
          if(A2!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED!\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD.\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD!\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD.\n\n",point);
      }
      }
      if(R3==0)
      {
          A3++;
          if(A3!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(R4==0)
      {
          A4++;
          if(A4!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(R5==0)
      {
          A5++;
          if(A5!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(R6==0)
      {
          A6++;
          if(A6!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(R7==0)
      {
          A7++;
          if(A7!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(R8==0)
      {
          A8++;
          if(A8!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(P1==0)
      {
          B1++;
          if(B1!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(P2==0)
      {
          B2++;
          if(B2!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(P3==0)
      {
          B3++;
          if(B3!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(P4==0)
      {
          B4++;
          if(B4!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(P5==0)
      {
          B5++;
          if(B5!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(P6==0)
      {
          B6++;
          if(B6!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(P7==0)
      {
          B7++;
          if(B7!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(P8==0)
      {
          B8++;
          if(B8!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }

      if(W1==0)
      {
          C1++;
          if(C1!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(W2==0)
      {
          C2++;
          if(C2!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(W3==0)
      {
          C3++;
          if(C3!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(W4==0)
      {
          C4++;
          if(C4!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(W5==0)
      {
          C5++;
          if(C5!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(W6==0)
      {
         C6++;
         if(C6!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(W7==0)
      {
          C7++;
          if(C7!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
      }
      }
      if(W8==0)
      {
          C8++;
          if(C8!=1)
          {
            printf("\t\t\tTHIS WORD IS REPEATED\n");
          point=0;
          printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
          }
          else
            {
          point=calculate(len);
          printf("\n\n\t\t\t\tNOT BAD\n");
        printf("\t\tYOU GET %d POINTS FOR THE WORD\n\n",point);
            }
     }
   }

      mid[t]=point;
    } DELAY(5);
    system("cls");
     int score=0;
    for(int i=0;i<3;i++)
    {
        score=score+mid[i];
    }
      int med;
    printf("\n\n\n\n\n\t\t\tYOU HAVE SCORED A TOTAL OF %d",score);
    DELAY(5);
    system("cls");
    printf("\n\n\n\n\n\t\tHAVE A NICE DAY AHEAD");
    printf("\n\n\n\tDO Y0U WISH TO GO BACK TO THE DASHBOARD??PRESS 2");
    scanf("%d",&med);
                system("cls");
                 break;}

        case 3:
             system("cls");
             printf("\n\n\n\n\n\t\t\tCOME BACK SOON");
             exit(0);
                 break;
    default: printf("\n\n\n\n\n\n\t\tYOU MADE AN INVALID CHOICE");
                exit(0);
                 break;
    }
            }}

           else
            { system("cls");
            printf("\n\t\t\tACCESS DENIED");
            exit(0);
            }
    }

    int DELAY(int number_of_seconds)
    {
        int milli_seconds=1000*number_of_seconds;
        clock_t start_time=clock();
        while(clock()<start_time+milli_seconds);
    }
    int calculate(int len)
    {   int point;
        if((len>0)&&(len<=4))
        {
            point=25;
        }
        else if((len>4)&&(len<=8))
        {
            point=55;
        }
       else if((len>8)&&(len<=12))
        {
            point=75;
        }
        else
        {
            point=100;
        }
        return(point);
    }





