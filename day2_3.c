#include<stdio.h>
int main(){

for(int i=1;i<=5;i++){
for(int j=1;j<=1;j++){
    printf("*");

}
int space=2*5-2*i;
for(int j=1;j<=space;j++){
printf(" ");}
for(int j=1;j<=i;j++){
printf("*");
}
printf("\n");
}
for(int i=5;i>=1;i--){
for(int j=1;j<i;j++){
printf("*");
}
int space=2*5-2*i;
for(int j=1;j<=space;j++){
printf("*");
}
printf("\n");
}



}
