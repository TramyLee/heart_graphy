#include <stdio.h>
int main(){

	float a,f;//min=100,max=0;
	float x,y;
	for(int i=1;i<=80;i++)
		putchar(((i>35)&&(i<45))?"--TramyLee"[(int)(i-(80-10)/2)]:'#');
	printf("\n");
	for(y=1.5f;y>-1.5f;y-=0.1f){
		for(x=-1.5f;x<1.5f;x+=0.05f){
			a=x*x+y*y-1;
			f=a*a*a-x*x*y*y*y;
			/*if(f>max)
				max=f;
			if(f<min)
				min=f;
				*/
			putchar(f<=0.0f?"*#@%*&"[(int)(f*(-8.0f))%5]:' ');
				}
	printf("\n");
}
//printf("max is %f,min is %f\n",max,min);
	return 0;
	}
