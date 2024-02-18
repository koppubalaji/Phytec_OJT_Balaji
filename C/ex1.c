#include<stdio.h>
#include<signal.h>





void sigint_handler(int signum)
{

	printf("Hey I Got SIGINT :%d\n\n",signum);
	signal(SIGINT,SIG_IGN);
	signal(SIGINT,SIG_DFL);
}

void sigquit_handler(int signum)
{

	printf("Hey I Got SIGINT :%d\n\n",signum);
	signal(SIGQUIT,SIG_DFL);
}

void sigtstp_handler(int signum)
{
	printf("Hey I Got SIGINT :%d\n\n",signum);
	signal(SIGTSTP,SIG_DFL);
}

void sigtrap(int signum)
{
	printf("Hey I Got SIGINT :%d\n\n",signum);
	signal(SIGTRAP,SIG_DFL);
}



int main()
{

	signal(SIGINT,sigint_handler);
	signal(SIGQUIT,sigquit_handler);
	signal(SIGTSTP,sigtstp_handler);

	
	
}
