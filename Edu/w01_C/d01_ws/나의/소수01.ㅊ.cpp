#include <stdio.h>

int main(void)

{
	int num1;
	while(1)
	{
  
		printf("���ڸ� �Է��ϼ��� (����� 0) : ");	
		scanf("%d",&a);
		
		// �Ҽ� �Ǵ�
		if(((a%2)!=0)||(a==2)){
		if(((a%3)!=0)||(a==3)){
			if(((a%5)!=0)||(a==5)){
				if(((a%7)!=0)||(a==7)){
					if(a!=1){
				printf("�Ҽ��Դϴ�.\n");
			     }
			     else{
			     	printf("�Ҽ��� �ƴմϴ�.\n");
				   }
		        }
		        else{
			     	printf("�Ҽ��� �ƴմϴ�.\n");
				   }
			  }
			  else{
			     	printf("�Ҽ��� �ƴմϴ�.\n");
				   }
		  }
		  else{
			     	printf("�Ҽ��� �ƴմϴ�.\n");
				   }
		}
		else if(a!=0){
			     	printf("�Ҽ��� �ƴմϴ�.\n");
				   }
		if(a==0){
		
		printf("Bye~~ \n");
		break;
		}
	}
	return 0;
  
}
