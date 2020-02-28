#include<stdio.h>

 struct Dob
{
  int day, month, year;
};
struct Info
{
   char name[80];
   int age;
   struct Dob dateofBirth;
};

int main()
{ int a;
    struct Info stdinfo;
    struct Dob date;

    stdinfo.name[0]='S';
    stdinfo.age=19;
    stdinfo.dateofBirth.day=11;
 /*   scanf("%s",&stdinfo.name);
    scanf("%d",&date.day);
    scanf("%d",&stdinfo.dateofBirth.day);
*/
    printf("%s %d %d", stdinfo.name, stdinfo.age,stdinfo.dateofBirth.day);
  a=sizeof (struct Info);
   printf(" %d",a );
    structure_pointer();
}
//130419 cls
void structure_pointer()
{
    struct Info*person;
    person=(struct*) malloc(sizeof(struct Info));
    int i=0;

    scanf("%s %d",&person->name, &person->age);

    printf("%s %d ", person->name, person->age);





}
