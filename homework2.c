#include<stdio.h>
#include<stdlib.h>
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
	printf("|    �{���]�pHW2  |\n");
	printf("|                 |\n");
	printf("|                 |\n");
	printf("|                 |\n");
	printf("|                 |\n");
	printf("|    2024/5/4     |\n");
	printf("-------------------\n");
	system("pause");//�ù��e���Ȱ��A���ݨϥΪ̫����N���� 
	system("cls");//�M���e�� 
	int password,count,i,j,n,o,p,f,g,k;
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
    system("cls");//�M���e��
    printf("------------------------\n");
    printf("| a. �e�X�����T����    |\n");
    printf("| b. ��ܭ��k��        |\n");
    printf("| c. ����              |\n");
    printf("------------------------\n");
    system("pause");//�ù��e���Ȱ��A���ݨϥΪ̫����N���� 
	system("cls");
	char ch,num1;
	printf("��J�r��");
	scanf(" %c",&ch);
	if(ch=='A'||ch=='a'){
		system("cls");//�M���e��
		printf("��Ja��n���r��");
		scanf(" %c",&num1);
		for(i=0;i<=num1-'a'+1;i++){
			for(j=0;num1-'a'-i;j++){
			 printf("");
			}
			for(j=0,k=0;j<=1;j++){
				printf("%c",num1-i+k);
				k++;
			}
			printf("\n");
			
		}
		ch=getch();
		if(ch>'n'){
			printf("���s��J");
			scanf(" %c",num1);
			
		}
	}
	if(ch=='B'||ch=='b'){
		printf("��J1-9�����");
		scanf("%d",&n);
		if(n>=1||n<=9){
			for(o=1;o<=n;o++){
				for(p=1;p<=o;p++){
					printf("%2d*%d=%2d",o,p,o*p);
				}
				printf("\n");
			}
		}else{
			printf("��J���~");
		}
		ch = getch();
	}
	if(ch=='C'||ch=='c'){
		printf("continue?(y/n)");
		scanf(" %ch",&g);
		if(g=='Y'||g=='y'){
			
			system("CLS");
		}
		else if(g=='N'||g=='n'){
			system("pause");
			return 0;
		}else{
			printf("���~���s��J");
		}
		
		
	}
}
	
