/*signal-alarm.c*/
#include<stdio.h>
#include<signal.h>
#include<unistd.h>

int counter = 0;

void sig_handler(int signo){

	printf("알람 발생! %d\n",counter++);
}

int main(void){
	int i = 0;
	
	signal(SIGALRM, sig_handler);
	alarm(5);

	while(i < 10){
		printf("%d\n",i);
//		sleep(1);
		i++;
	}

	alarm(5);

	return(0);
}
