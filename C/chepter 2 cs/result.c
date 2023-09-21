#include<stdio.h>
int main(){
    int marks;
    printf("enter marks(0-199) :");
    scanf("%d", &marks);

    // if (marks >=0 && marks<=30){
    //    printf("fail \n");
    //    } else if (marks > 30 && marks <= 100){
    //     printf("pass \n");
    //    }else {
    //     printf("worng marks");
    //    }

    marks <=30 ? printf("fail \n") : printf("pass \n"); 
       return 0;
    }
    
 