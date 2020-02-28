#include<stdio.h>

 struct Dob
{
  int day, month, year;
};
union Info //jkono ekta member e value assign kora jay

{
   char name[80];
   int age;
   struct Dob dateofBirth;
};

int main()
{
    int i=0;
    union Info person[20];
    for(i=0;i<2;++i)
    {
        scanf("%s %d",&person[i].name,&person[i].age);
    }

    for(i=0;i<2;++i)
    {
        printf("%s %d\n",person[i].name,person[i].age);
    }

}
