#include<stdio.h>

int main(){


int height;

printf("Enter your height :");

scanf("%d", &height);

int foot = height / 12;
int inc = height % 12;

printf("Your height is %d foot and %d inc.", foot, inc);




return 0;


}
