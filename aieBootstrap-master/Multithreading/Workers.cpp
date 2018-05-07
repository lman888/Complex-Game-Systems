#include "Workers.h"



Workers::Workers()
{
	
}


Workers::~Workers()
{
	stop();													///Calls stop and sets isRunning to false
}

void Workers::start()
{
	std::lock_guard<std::mutex> mutex(workerMutex);			
	if (isRunning == true)
	{
		return;
		isRunning = true;
	}
}

void Workers::stop()
{
	std::lock_guard<std::mutex> mutex(workerMutex);			
	if (isRunning == false)
	{
		return;
		isRunning = false;
	}

	//cv.notify_all();										///Notifies the other threads
	workerThread.join();									///Join this thread to the main thread
}

