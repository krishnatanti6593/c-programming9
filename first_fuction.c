#include<stdio.h>
void temp(){
    int a,b;
    printf("enter ");
    scanf("%d",&a);
    printf("enter ");
    scanf("%d",&b);
    int c=a+b;
    printf("%d",c);
    return;
}
int main(){
    temp();
    return 0;

}