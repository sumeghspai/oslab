#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include<unistd.h>


int main()
{int pid;
	int flag=1;
pid=fork();
if(pid!=0)
	{
	// ftok to generate unique key
	key_t key = ftok("shmfile",65);

	// shmget returns an identifier in shmid
	int shmid = shmget(key,1024,0666|IPC_CREAT);

	// shmat to attach to shared memory
	char *str = (char*) shmat(shmid,(void*)0,0);
	
	
	printf("Write Data : ");
	scanf("%s",str);

	printf("Data written in memory: %s\n",str);
	
	//detach from shared memory
	shmdt(str);
	flag=0;
}
if(pid==0){

	// ftok to generate unique key
	while(flag==1)
	;
	key_t key = ftok("shmfile",65);

	// shmget returns an identifier in shmid
	int shmid = shmget(key,1024,0666|IPC_CREAT);

	// shmat to attach to shared memory
	char *str = (char*) shmat(shmid,(void*)0,0);

	printf("Data read from memory: %s\n",str);
	
	//detach from shared memory
	shmdt(str);
	
	// destroy the shared memory
	shmctl(shmid,IPC_RMID,NULL);
	


}

	return 0;
}

