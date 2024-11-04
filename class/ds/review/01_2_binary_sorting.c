#include <stdio.h>
#include<stdbool.h>
#include<ctype.h>

int binsearch(int list[], int key, int left, int right){
    int middle=0;
    while(left<=right){
        middle=(left+right)/2;
        switch(compare(list[middle],key)){
            case -1:left=middle+1;
                    break;
            case 0:return middle;
            case 1:right=middle-1;
ormat specifies type 'int *' but the argument has type 'int'        }
    }
    return -1;
}
void main(){
    int num;
    int spot=0;
    bool inp_wd=false;
    int lst[spot];
    while(inp_wd!=true){
        printf("enter the number of element(for finishing to enter, enter any word): ");
        scanf("%i",&num);
        if(isdigit(num)){
            lst[spot]=num;
            spot++;
        
        }else
            inp_wd=true;
    }
    printf("enter the number to find:");
    scanf("%d", )

}