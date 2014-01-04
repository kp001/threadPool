
#include<iostream>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <vector>
#include <iostream>
#include "CCnetproxy.h"
//#include "thread.h"

using namespace std;


void* start_thread_KP(void* arg)
{
	
  return NULL;
}


int main(int argc,char *argv[])
{
	int ret=0;
	CCNetProxy cd;
	
	cd.build_tp();

	
while(ret<15)
{
	sleep(1);
	ret++;

}

cout<<"\nApp Exiting\n";
return 0;
}


