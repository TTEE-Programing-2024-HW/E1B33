#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define MAX 20
void choise_a();
void choise_b();
void choise_c();
void choise_d();
int choise_e(); 
struct info{
	char name[MAX];
	char id[6];
	int math,phy,eng;
};
struct info student[MAX];
int temp=0,rank[MAX];
float avg[MAX]={0};
int main(void){
		printf("-------------------\n");
	printf("|                 |\n");
	printf("|     �t��:�q���t |\n");
	printf("|                 |\n");
	printf("|     �Z��:E1B    |\n");
	printf("|                 |\n");
	printf("|     �y��:33     |\n");
	printf("|                 |\n");
	printf("|     �m�W:�i�f޳ |\n");
	printf("|                 |\n");
	printf("|                 |\n");
	printf("|    �{���]�pHW3  |\n");
	printf("|                 |\n");
	printf("|                 |\n");
	printf("|                 |\n");
	printf("|                 |\n");
	printf("|    2024/5/16    |\n");
	printf("-------------------\n");
	system("pause");//�ù��e���Ȱ��A���ݨϥΪ̫����N���� 
	system("cls");//�M���e�� 
		int password,count,n,i;
		char ch,g;
			printf("��J4�ӼƦr�K�X:");
	scanf("%d",&password);
	for(;;){
		if(count==2){
			system("pause");
			return 0;
		}
		if(password==2024){
			break;
		}else{
		printf("���~�A��J�@���K�X");
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
		printf("| e. Exit                      \n|");
		printf("---------------------------------\n");
        	ch=getch();
			switch (ch){
		case 'a':
		case 'A':
			choise_a();
			break;
		case 'b':
		case 'B':
			choise_b();
			break;
		case 'c':
		case 'C':
			choise_c();
			break;
		case 'd':
		case 'D':
			choise_d();
			break;
		case 'E':
		case 'e':	
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
			printf("���~���s��J");
		}
			
		}
}
}
void choise_a(void){
	int i,j,n,int_temp;
	float float_temp,avg_temp[MAX]={0};
	system("cls");
	for(;;){
		printf("��Jn(5-10):");
		fflush(stdin);
		scanf("%d",&n);
		if(5<=n&&n<=10)
		break;
	}
	for(i=0;i<n;i++){
		printf("%d�ǥ�\n",i+1);
		scanf("%s %s %d %d %d",&student[temp+i].name,&student[temp+i].id,&student[temp+i].math,&student[temp+i].phy,&student[temp+i].eng);
		for(;;){
			if(strlen(student[temp+i].id)==6){
				break;
			}else{
				printf("���~");
				fflush(stdin);
				scanf("%s",&student[temp+i].id);
				continue;
			}
		}
		for(;;){
			if(0<=student[temp+i].math&&student[temp+i].math<=100){
				break;
			}else{
				printf("wrong(0-100)");
				fflush(stdin);
				scanf("%d",&student[temp+i].math);
				continue;
			}
		}
		for(;;){
			if(0<=student[temp+i].phy&&student[temp+i].phy<=100){
				break;
			}else{
				printf("wrong(0-100)");
				fflush(stdin);
				scanf("%d",&student[temp+i].phy);
				continue;}
			}
			for(;;){
			if(0<=student[temp+i].eng&&student[temp+i].eng<=100){
				break;
			}else{
				printf("wrong(0-100)");
				fflush(stdin);
				scanf("%d",&student[temp+i].eng);
				continue;}
			}
	}
	temp+=n;
	for(i=0;i<temp;i++){
		avg[i]=((float)(student[temp+i].math+student[temp+i].phy+student[temp+i].eng))/3;
		avg_temp[i]=((float)(student[temp+i].math+student[temp+i].phy+student[temp+i].eng))/3;
	}
	for(i=0;i<temp;i++){
		rank[i]=i;
	}
	for(i=0;i<temp;i++){
		for(j=0;j<temp-1;j++){
			if(avg_temp[j]<avg_temp[j+1]){
				float_temp=avg_temp[j];
				avg_temp[j]=avg_temp[j+1];
				avg_temp[j+1]=float_temp;
				int_temp=rank[j];
				rank[j]=rank[j+1];
				rank[j+1]=int_temp;			
		}
	}
}
}
void choise_b(void){
	int i;
	char ch;
	printf("�W�l id math phy eng avg_grade\n");
	for(i=0;i<temp;i++){
		printf("%-6s %-6s %3d %3d %3d %3.1f\n");
	
	} 
	
	
}
void choise_c(void){
	
}
void choise_d(void){
	
}
 


