#include <stdio.h>
#include <uncertain.h>

int
main(int argc, char *  argv[])
{
	double	DCF;

	DCF = libUncertainDoubleUniformDist(382734, 238742);
	printf("DCF = %lf\n", DCF);

	return 0;
}