#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "RUS");
	
	int n1, n2;
	
	scanf("%d %d", &n1, &n2);
	
	if (n1^n2)
		printf("����� �� �����!");
	else
		printf("����� �����!");
	
	return 0;
}
