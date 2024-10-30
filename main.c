
#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int rew = printf("\001\002\007\v\010\f\ra\n");
	printf("%d\n", rew);
	int re = ft_printf("\001\002\007\v\010\f\ra\n");
	printf("%d\n", re);
}
