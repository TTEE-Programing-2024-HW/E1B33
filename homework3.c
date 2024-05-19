#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int x,y,i,j;
char seat[10][10]={{'\\','1','2','3','4','5','6','7','8','9'},
					{'9','-','-','-','-','-','-','-','-','-'},
					{'8','-','-','-','-','-','-','-','-','-'},
					{'7','-','-','-','-','-','-','-','-','-'},
					{'6','-','-','-','-','-','-','-','-','-'},
					{'5','-','-','-','-','-','-','-','-','-'},
					{'4','-','-','-','-','-','-','-','-','-'},
					{'3','-','-','-','-','-','-','-','-','-'},
					{'2','-','-','-','-','-','-','-','-','-'},
					{'1','-','-','-','-','-','-','-','-','-'}};
void choise_a(char seat[10][10]);
int main(void){
	for(i=0;i<10;i++){
	srand(time(NULL));
	x=rand()%9+1;
	y=rand()%9+1;
	for(;;){
		if(seat[x][y]=='*'){
				x=rand()%9+1;
				y=rand()%9+1;
		}else{
			break;
		}
		
		
	} 
	seat[x][y]='*';
}
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
		printf("--------[Booking System]---------\n");
		printf("| a. Available seats            \n|");
		printf("| b. Arrange for you            \n|");
		printf("| c. Choose by yourself         \n|");
		printf("| d. Exit                       \n|");
		printf("---------------------------------\n");
		ch=getch();
		switch (ch){
		
		case 'a':
		case 'A':
			choise_a(seat);
			break;
		case 'd':
		case 'D':
			printf("Continue?");
			scanf(" %c",&g);
			if(g=='Y'||g=='y'){
			
			system("CLS");
			break;
		}
		else if(g=='N'||g=='n'){
			system("pause");
			return 0;
			
}else{
			printf("錯誤重新輸入");
		}
}
}
}
void choise_a(char seat[10][10]){
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf(" %c",seat[i][j]);
		}
		printf("\n");
	}
	
}



	
		
