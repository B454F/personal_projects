// https://github.com/B454F/personal_projects //
// Delta = b�-4ac   ax�+bx+c  Delta > 0 ise 2 farkl� k�k , Delta = 0 ise �ak���k tek k�k , Delta < 0 ise Reel K�k bulunmuyor. // 

#include <stdio.h>
#include <math.h>

int main(){
		float a, b, c, x1, x2, x, kok_delta, delta;
		printf("a, b, c, Degerlerini Girin:\n");
		scanf("%f %f %f", &a, &b, &c);
		
		delta = b*b - 4.0*a*c;
	
		
		if(delta > 0.0){
			x1 = ( -b + sqrt(delta)) / (2.0*a );
			x2 = ( -b - sqrt(delta)) / (2.0*a );
			
			printf("\nReel kokleri");
			printf("\nx1 = %f",x1);
			printf("\nx2 = %f",x2);
		}
		else if(delta < 0.0 ){
			kok_delta = ( sqrt(-delta) ) / (2.0*a);
			x = -0.5*b/a;
			
			printf("\nKarmasik k�kler:");
			printf("\nx1 = %f + (%f)i", x, kok_delta);
			printf("\nx2 = %f - (%f)i", x, kok_delta);
		}
		else {
			x = -0.5*b/a;
			printf("\nKokler Esit");
			printf("\nx1 = x2 = %f", x);
		}
	
	return 0;	
}
