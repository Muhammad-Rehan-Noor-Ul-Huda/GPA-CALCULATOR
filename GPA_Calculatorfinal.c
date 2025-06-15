#include<stdio.h>
#include<windows.h>
void fun4(float GPA){
printf("REMARKS: ");
if(GPA>3.7){
    printf("WOW!,EXECELLENT\n");
}
else if(GPA>3.5){
    printf("AMAZING\n");
}
else if(GPA>3.3){
    printf("GOOD!\n");
}
else if(GPA>3){
    printf("NOT BAD!\n");
}
else {
    printf("NEED IMPROVEMENT\n");
}
}
float fun3(float c,float credit,float e){
e=e+c*credit;
return e;
}
int fun1(){
    
    FILE *first=fopen("gpa details.txt","w+");
    FILE *second=fopen("Gpa of students.txt","a+");
    if(first==NULL){
        printf("file cannot be opened:");
        return 1;
    }
     if(second==NULL){
        printf("file cannot be opened:");
        return 1;
    }
    char name[50];
   float final=0;
   float Credith;
   char subject[50];
   float marks;
   char check;
   float c;
   int ch;
   float e=0;
   float count=0;
   float GPA;
   int countf=1;
  char ID[50];
   printf("Enter your name:");
   while((ch=getchar())!='\n' && ch!=EOF);
   fgets(name,sizeof(name),stdin);
     printf("Enter Student ID:");
   fgets(ID,sizeof(ID),stdin);

   fprintf(first,"_________________________\n");
   fprintf(first,"|Student : %s ",name);
      fprintf(first,"_________________________\n");
         fprintf(second,"_________________________\n");
   fprintf(second,"|Student : %s ",name);
      fprintf(second,"_________________________\n");
          fprintf(second,"_________________________\n");
   fprintf(second,"| student ID : %s ",ID);
      fprintf(second,"_________________________\n");
 
 do{    
    printf("| Enter name of subject|:");
  
   fgets(subject,sizeof(subject),stdin);
   
   printf("Enter credit hours");
   
   scanf("%f",&Credith);
 
    while(Credith<0 || Credith>5){
        printf("\n|Enter correct credit hours|:");
        scanf("%f",&Credith);
    }
    
    printf("\n| Enter your marks|:");
    scanf("%f",&marks);
    while (marks<0 || marks>100)
    {
       printf("\n| Please enter correct marks |:");
       scanf("%f",&marks);
    }
     fprintf(first,"%d->Subject : %s Credit hours: %.2f  obtained marks : %.1f\n",countf,subject,Credith,marks);
     countf++;
    if(marks>=85){
        c=4.0;
    }
    else if(marks>=80 && marks<=84){
        c=3.70;
    }
        else if(marks>=75 && marks<=79){
        c=3.30;
    }
        else if(marks>=70 && marks<=74){
        c=3.00;
    }
        else if(marks>=65 && marks<=69){
        c=2.70;
    }
        else if(marks>=61 && marks<=64){
        c=2.30;
    }
        else if(marks>=58 && marks<=60){
        c=2.00;
    }
        else if(marks>=55 && marks<=57){
        c=1.70;
    }
        else if(marks>=50 && marks<=54){
        c=1.00;
    }
        else if(marks<50){
        c=0.00;
    }
     final=final+fun3(c,Credith,e);
    
    count=count+Credith;
    printf("\n| Add another subject (y/n)|:");
scanf(" %c",&check);
while((ch=getchar())!='\n' && ch!=EOF);

   }while(check=='y' || check=='Y');
GPA=final/count;
printf("Calculating final GPA...\n");
     Beep(500,700);
     fprintf(first,"\nSo based on these given details your gpa is %.2f\n",GPA);
     fprintf(second,"GPA is %.2f\n",GPA);
      printf("__________________\n");
printf("|Your GPA is %.2f|\n",GPA);
 printf("__________________\n");
fun4(GPA);
char crr;
printf("Do you want to see details of gpa in file\n if yes then press (y)");
scanf(" %c",&crr);
if(crr=='y' || crr=='Y'){
    char line[1000];
    rewind(first);
while (fgets(line, sizeof(line), first)) {
    printf("%s",line);
}
}
char cbb;
printf("Do you want to see GPA of all students You calculated? \n  press (y/n):");

scanf(" %c",&cbb);
if(cbb=='y' || cbb=='Y'){
    char like[1000];
    rewind(second);
while (fgets(like, sizeof(like), second)) {
    
    printf("%s",like);
}
}
fclose(first);

fclose(second);
 
}
int fun2(){
    FILE *first=fopen("gpa details.txt","w+");
     FILE *second=fopen("Gpa of students.txt","a+");
    if(first==NULL){
        printf("File cannot be opened due to unknown reason");
        Beep(300,500);
        return 1;
    }
     if(second==NULL){
        printf("file cannot be opened:");
        return 1;
    }
      char ID[50];
char name[60];
    float arr[9]={4.0,3.7,3.3,3.0,2.7,2.3,2.0,1.7,1.0};
    float final=0;
    int ch;
        float credit;
   char subject[50];
   float gradepoint;
   char ar;
   float c;
   float e=0;
   float count=0;
   float GPA;
     printf("Enter your name:");
   while((ch=getchar())!='\n' && ch!=EOF);

   fgets(name,sizeof(name),stdin);
     printf("Enter Student ID:");
   fgets(ID,sizeof(ID),stdin);
    fprintf(first,"_________________________\n");
   fprintf(first,"|Student : %s ",name);
      fprintf(first,"_________________________\n");
         fprintf(second,"_________________________\n");
   fprintf(second,"|Student : %s ",name);
      fprintf(second,"_________________________\n");
          fprintf(second,"_________________________\n");
   fprintf(second,"| student ID : %s ",ID);
      fprintf(second,"_________________________\n");
 
   do{
    printf("| Enter name of subject|:");
fgets(subject,sizeof(subject),stdin);
    printf("\n| Enter credit hours|:");
   
   scanf("%f",&credit);
 
    while(credit<0 || credit>5){
        printf("\n| Enter correct credit hours|:");
        scanf("%f",&credit);
    }
    printf("\n| Enter your grade point|:");
    
    scanf("%f",&gradepoint);
    while (gradepoint!=arr[0] && gradepoint!=arr[1] && gradepoint!=arr[2] && gradepoint!=arr[3] && gradepoint!=arr[4] && gradepoint!=arr[5] && gradepoint!=arr[6] && gradepoint!=arr[7] &&gradepoint!=arr[8])
    {
       printf("\n| Please enter correct grade point|:");
       scanf(" %f",&gradepoint);
       
    }
    fprintf(first,"Suject : %s Credit hours : %.2f Grade point : %.2f\n",subject,credit,gradepoint);
   final=final+fun3(gradepoint,credit,e); 
    count=count+credit;
    printf("\n| Enter y to continue|: ");
    
       scanf(" %c",&ar);
           while(getchar()!='\n' && getchar()!=EOF);

   }while(ar=='y' || ar=='Y');
GPA=final/count;
  fprintf(first,"\nSo based on these given details your gpa is %.2f\n",GPA);
     fprintf(second,"GPA is %.2f\n",GPA);
      printf("__________________\n");
printf("\n Calculating final GPA...\n");
     Beep(500,700);
     printf("__________________\n");
printf("|Your GPA is %.2f|\n",GPA);
 printf("__________________");
 printf("Do you want to check your gpa details (y/n)");
 char check;
 scanf(" %c",&check);
 if(check=='y' || check=='Y'){
    rewind(first);
    char line[1000];
    while(fgets(line,sizeof(line),first)){
        printf("%s",line);
    }
 }
 
fun4(GPA);
char cbb;
printf("Do you want to see GPA of all students You calculated? \n  press (y/n):");

scanf(" %c",&cbb);
if(cbb=='y' || cbb=='Y'){
    char like[1000];
    rewind(second);
while (fgets(like, sizeof(like), second)) {
    
    printf("%s",like);
}
}
fclose(first);

fclose(second);
    
}
int main(){

    int a;

    int b=0;
    char c;
    printf("\n                  ____________________________\n");
    printf("\n                   WELCOME TO MY GPA CALCULATOR\n");
    printf("                  _____________________________\n");
    printf("Here is grading scale on the basis of which GPA would be calculated:\n ");

        printf("\n|Percentage (%%)     | Grade  | GPA (4.0 Scale)  |\n");
        printf("| ----------------  | ------ | ---------------- |\n");
        printf("-> 85 - 100         | A      | 4.00             |\n");
        printf("-> 80 - 84          | A-     | 3.70             |\n");
        printf("-> 75 - 79          | B+     | 3.30             |\n");
        printf("-> 70 - 74          | B      | 3.00             |\n");
        printf("-> 65 - 69          | B-     | 2.70             |\n");
        printf("-> 61 - 64          | C+     | 2.30             |\n");
        printf("-> 58 - 60          | C      | 2.00             |\n");
        printf("-> 55 - 57          | C-     | 1.70             |\n");
        printf("-> 50 - 54          | D      | 1.00             |\n");
        printf("-> Below 50         | F      | 0.00             |\n");
        printf("To calculate GPA by entering marks in subjects press ->1\n");
        printf("To calculate GPA by directly entering GPA in that particular subject press ->2\n");
        do{
            scanf("%d",&a);
        }while(a!=1 && a!=2);
        do{
    if(a==1){
        printf("Getting ready...\n");
Beep(500,800);
 fun1();
    }
    if(a==2){
printf("Getting ready...\n");
Beep(500,800);
        fun2();
    }
    printf("Do you want to check again gpa ?(y/n)");
    scanf(" %c",&c);
        }while(c=='y' || c=='Y');
        printf("\nExiting\n");
        Beep(500,500);
        printf("\n_________________\n");
printf("Good bye! take care....\n");
        printf("\n_________________\n");
    return 0;
}
