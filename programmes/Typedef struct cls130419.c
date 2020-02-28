
#include<stdio.h>

struct Dob
{
    int day, month, year;
};
typedef struct
{
    char name[80];
    int age;
    struct Dob dateofBirth;
} Info;

int main()
{
    typedef int height;
    height h1, h2;

    int i=0;
    Info person[20]; //struct Info lekhte hobe na
    for(i=0; i<2; ++i)
    {
        scanf("%s %d",&person[i].name,&person[i].age);
    }

    for(i=0; i<2; ++i)
    {
        printf("%s %d\n",person[i].name,person[i].age);
    }

}
