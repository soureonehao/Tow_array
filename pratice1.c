#include<stdio.h>
void main() {
	//��ά�����Ӧ�úͳ�ʼ��

	int i, j,Msum = 0,Esum = 0,Csum = 0;	//�����ܺͱ���
	int array[5][3], Maverage, Eaverage, Caverage ;	//��������
	/*������������˵����Ƴɼ�*/
	for (i = 0; i <= 4; i++) {
		for (j = 0; j <= 2; j++) {
			scanf_s("%d", &array[i][j]);		//������������Ԫ�ص�ֵ
		}
	}
	for (i = 0; i <= 4; i++) {
		for (j = 0; j <= 2; j++) {			
			printf("%d", array[i][j]);//������Ƴɼ�
			if (j == 2) {
				printf("\n");
			}
			if (i == 0) {
				Msum += array[i][j];
				Maverage = Msum / 5;

			}
			else if (i == 1) {
				Csum += array[i][j];
				Caverage = Csum / 5;
			}
			else if (i == 2) {
				Esum += array[i][j];
				Eaverage = Esum / 5;
			}
			}
		
		}
	printf("%d\n%d\n%d\n", Msum, Csum, Esum);	
	printf("%d\n%d\n%d", Maverage, Caverage, Eaverage);		
	}

