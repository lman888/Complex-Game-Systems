#pragma once
#include <list>
#include <thread>
#include "Job_System.h"
#include <mutex>
#include <condition_variable>						///Locks a thread, or multiple threads


class Workers
{
public:

	Workers();
	~Workers();

	void Start();									///Starts the job
	void Stop();									///Stops the job
	void SetJob();

private:
	std::thread workerThread;						///A single worker
	std::mutex workerMutex;							///Mutex creation
	std::condition_variable cv;						///Conditional Variable. Contacts all threads
	bool isRunning = false;							///To check if the job is running
};