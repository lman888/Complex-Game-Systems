#pragma once
#include <list>
#include <thread>
#include <mutex>
#include <condition_variable>						///Locks a thread, or multiple threads

#include "Job_System.h"

class Workers
{
public:

	Workers() { running = true; ready = false; unlock = std::unique_lock<std::mutex>(workerMutex); }
	void Run();
	void stop() { running = false; }
	void getCondition(std::condition_variable* &cv);
	~Workers();
	

	std::condition_variable cv;
	std::mutex workerMutex;
	std::unique_lock<std::mutex> unlock;
	bool running;
	bool ready;
};