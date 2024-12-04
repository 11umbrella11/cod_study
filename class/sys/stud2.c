#include<stdio.h>
#include<stdlib.h>

struct student{int id;};

int main(void)
{
    int n;
    struct student** ptr;//

    scanf("%d", &n);
    ptr = (struct student**)malloc(sizeof(struct student*) * n);
    for(int i=0; i<n;i++){
        *ptr=(struct student*)malloc(sizeof(struct student*) * i);
    }
}