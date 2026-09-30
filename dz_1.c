#include <math.h>
#include <stdio.h>

int main(){
	float hx = 0.5, hy = 1.2;
	float xn = 0.2, yn = 1;
	float xk = 1, yk = 3;
	float sum_z = 0;
	float Z = 0;

	for (float x=xn; x<=xk; x+=hx){
		for (float y=yn; y<=yk; y+=hy){
			printf("%.1f %.1f\n",x,y);
			if((x * y * y)<2){
				Z = fmin(fabs(1-sinf(pow(x, 2) + pow(y, 3))), sqrt(pow(x, 2)));
			}
			else{
				Z = sqrt(pow(x, 2)*y+8);
			}
			printf("%.1f\n", Z);
			if (Z > 0.2){
				sum_z += Z;
			}
		}
	}
	printf("sum Z > 0.2: %.4f\n", sum_z);
	return 0;
}
