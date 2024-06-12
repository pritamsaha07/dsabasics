#include <stdio.h>
struct student{
 
 int roll,marks;
 char name[50],adress[100];
 
};
int main(void) {
int n,i;
printf("Enter no. of students\n");
scanf("%d",&n);
getchar();
struct student st[n];
for(i=0;i<n;i++)
{
 printf("Enter name of student %d\n",i+1);
 scanf("%[^\n]s",st[i].name);
 //getchar();
 printf("enter roll no.\n");
 scanf("%d",&st[i].roll);
 printf("enter marks no.\n");
 scanf("%d",&st[i].marks);
 printf("Enter adress\n");
 //getchar();
 
 scanf("%[^\n]s",st[i].adress);
 }
for( i=0;i<n;i++)
{
 
 printf("student %d\n",i+1);
 printf("name: %s\n",st[i].name);
 printf("marks: %d\n",st[i].marks);
 printf("roll: %d\n",st[i].roll);
 printf("name: %s\n",st[i].adress);
 
}
return 0;
}