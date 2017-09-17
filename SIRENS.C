#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k;
for(k=0;k<3;k++){
for(i=500;i<1500;i++){
sound(i);
delay(2);
nosound();
for(j=1500;j>500;j--){
sound(j);
delay(2);
nosound();
}
}
}
}