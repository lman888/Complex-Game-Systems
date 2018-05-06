#pragma once
#include <list>
#include <mutex>
#include <thread>


class Workers
{
public:
	Workers();
	~Workers();


	void StartTask(void *fpt);


private:
	std::list<Workers> list;		///Creates a list of workers
	std::mutex myMutex;				///Creates mutex
	std::thread myThread;			///Creates a thread
	bool isRunning = false;
};