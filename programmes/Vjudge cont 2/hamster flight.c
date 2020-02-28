#include <stdio.h>
#include <math.h>

#define PI 3.14159265


int main()
{
	int t, T;
	scanf("%d",&T);

	for ( t = 0 ; t < T ; t ++ )
	{
		double V0, K1, K2;
		double theta, max, points1, points2;

		scanf("%lf %lf %lf", &V0, &K2, &K1);
		theta = (PI -atan(4.0*K2/K1))/2;
		points1 = V0*V0*sin(theta)*sin(theta)/20;
		points2 = V0*V0*sin(2*theta) /10;
		max = K1 * points1 + K2 * points2;

		printf("%.3f %0.3f\n", theta, max);
	}

	return 0;
}
