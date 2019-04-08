#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

int hu,min;

printf("請輸入現在時間:");
scanf("%d,%d",&hu,&min);

if(hu<17 && hu>7 && min<=59 && min>=0){
printf("現在是上課時間。\n");	
}
else if(hu==7 && min<=59 && min>=30){
printf("現在是上課時間。\n");	
}
else if(hu >= 25 || min >= 60 || min<=-1){
printf("您輸入的是無效時間。\n");	
}
else{
printf("現在是放學時間。\n");	
}

system("PAUSE");
return 0;
}
