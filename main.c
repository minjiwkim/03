#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    int b;
    
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%i", &a);
    
    printf("�и� �Է��ϼ��� : ");
    scanf("%i", &b); 
    
    printf("�������� ����� %f\n �Դϴ�.", (float)a/b);
    
  system("PAUSE");
  return 0;
}
