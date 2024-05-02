#include<stdio.h>
#include<stdlib.h>
int main(void){
	printf("-------------------\n");
	printf("|                 |\n");
	printf("|     系所:電機系 |\n");
	printf("|                 |\n");
	printf("|     班級:E1B    |\n");
	printf("|                 |\n");
	printf("|     座號:33     |\n");
	printf("|                 |\n");
	printf("|     姓名:張宸瑋 |\n");
	printf("|                 |\n");
	printf("|                 |\n");
	printf("|    程式設計HW2  |\n");
	printf("|                 |\n");
	printf("|                 |\n");
	printf("|                 |\n");
	printf("|                 |\n");
	printf("|    2024/4/1     |\n");
	printf("-------------------\n");
	system("pause");//螢幕畫面暫停，等待使用者按任意按鍵 
	system("cls");//清除畫面 
	int password,count,i,j,n;
	printf("輸入4個數字密碼:");
	scanf("%d",&password);
	for(;;){
		if(count==2){
			system("pause");
			return 0;
		}
		if(password==2024){
			break;
		}else{
		printf("錯誤再輸入一次密碼");
		scanf("%d",&password);
		count++;
	}
	}
	system("pause");
    system("cls");//清除畫面
    printf("------------------------\n");
    printf("| a. 畫出直角三角形    |\n");
    printf("| b. 顯示乘法表        |\n");
    printf("| c. 結束              |\n");
    printf("------------------------\n");
    system("pause");//螢幕畫面暫停，等待使用者按任意按鍵 
	system("cls");
	char ch,num1;
	printf("輸入字元");
	scanf(" %c",&ch);
	if(ch=='A'||ch=='a'){
		system("cls");//清除畫面
		printf("輸入a到n的字元");
		scanf(" %c",&num1);
		for(i=0;i<=num1-'a'+1;i++){
			for(j=0;num1-'a'-i;j++){
			}
			for
		}
		if(ch>'n'){
			printf("重新輸入");
			scanf(" %c",num1);
			
		}
	}
	if(ch=='B'||ch=='b'){
		printf("輸入1-9的整數");
		scanf("%d",&n);
		
	}
}
	
