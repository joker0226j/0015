#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

int hu,min;

printf("�п�J�{�b�ɶ�:");
scanf("%d,%d",&hu,&min);

if(hu<17 && hu>7 && min<=59 && min>=0){
printf("�{�b�O�W�Үɶ��C\n");	
}
else if(hu==7 && min<=59 && min>=30){
printf("�{�b�O�W�Үɶ��C\n");	
}
else if(hu >= 25 || min >= 60 || min<=-1){
printf("�z��J���O�L�Įɶ��C\n");	
}
else{
printf("�{�b�O��Ǯɶ��C\n");	
}

system("PAUSE");
return 0;
}
