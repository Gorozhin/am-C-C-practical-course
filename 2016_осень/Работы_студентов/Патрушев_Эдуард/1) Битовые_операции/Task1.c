#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "RUS");
	
	int n, n1, i=0;
	char n2[10]={};
	
	printf("������� �����: ");
	scanf("%d", &n);
	n1 = n;
	printf("\n������������� �����:\n");
	
	while (n1 != 0)
	{
		n2[i] = 1 & n1;
		n1 = n1 >> 1;
		i++;
	}
	
	printf("�������� - ");
	
	for (--i; i>=0; i--)
	{
		printf("%d", n2[i]);
	}
	
	printf("\n");
	
	printf("������������ - %o\n����������������� - %x", n, n);
	
	return 0;
}
