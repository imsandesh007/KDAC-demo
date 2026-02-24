#include <stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number you want the table of: ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        int nextTerm= i*n;
        printf("\n%d*%d=%d",n,i, nextTerm);
        
    }
    return 0;
}