#include <stdio.h>
int main(){

	float a;
	float x,y;
	for(int i=1;i<=80;i++)
		putchar(((i>3)&&(i<45))?"--TramyLee"[(int)(i-(80-10)/2)]:'#');
	printf("\n");
	for(y=1.5f;y>-1.5f;y-=0.1f){
		for(x=-1.5f;x<1.5f;x+=0.05f){
			a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<=0.0f?'*':' ');
				}
	printf("\n");
}

	return 0;
	}
