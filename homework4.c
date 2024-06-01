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
	printf("|    程式設計HW3  |\n");
	printf("|                 |\n");
	printf("|                 |\n");
	printf("|                 |\n");
	printf("|                 |\n");
	printf("|    2024/5/16    |\n");
	printf("-------------------\n");
	system("pause");//螢幕畫面暫停，等待使用者按任意按鍵 
	system("cls");//清除畫面 
		int password,count;
		char ch,g;
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
	system("cls");
	for(;;){
		printf("--------[Grade System]---------\n");
		printf("| a. Enter student grades      \n|");
		printf("| b. Display student grades    \n|");
		printf("| c. Search for student grades \n|");
		printf("| d. Grade ranking             \n|");
		printf("| d. Exit                      \n|");
		printf("---------------------------------\n");
		ch=getch();
			switch (ch){
				
			}
}
}
