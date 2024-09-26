#include <stdio.h>

int	fibonacci(int i){
	if (i < 0)
		return (-1);
	if (i < 2)
		return (i);
	return (fibonacci(i - 2) + fibonacci(i - 1));
}

int	main(){
    
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
	printf("%d", ft_fibonacci(n));
	
	return 0;
}