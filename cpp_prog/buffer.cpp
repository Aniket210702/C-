#include<stdio.h>
#include<unistd.h>
int main(){
	while(1){
		//printf("Hello\n");
		printf("hello");
		fflush(stdout);//Avoids buffer overflow
		sleep(1);//printed in buffer
	}
	return 0;
}
