#include <stdio.h>
#include <uncertain.h>

int
main(int argc, char *  argv[])
{
	double	a, b, c;

	DCF = libUncertainDoubleUniformDist(382734, 238742, 2398743, 23874, 2387432, 287354823);
	printf("DCF = %lf\n", DCF);

	return 0;
}