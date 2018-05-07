#pragma once
#include <list>
#include <thread>
#include "Job_System.h"
#include <mutex>
#include <condition_variable>						///Locks a thread, or multiple threads

class Workers : public Job_System
{
public:

	Workers();
	~Workers();

	void start();									///Starts the job
	void stop();									///Stops the job

	std::thread workerThread;						///A single worker
	std::mutex workerMutex;							///Mutex creation
	std::condition_variable cv;						///Conditional Variable
	bool isRunning = false;							///To check if the job is running
};