#ifndef QUEUE_HPP
#define QUEUE_HPP

void init_queue(Queue & pq);
void enqueue(Queue & pq, float data);
float dequeue(Queue & pq);
float show(const Queue & pq);

struct Queue{
	int head = 0;
	int tail = 0;
	vector<float> v = {};
};

#endif /* QUEUE_HPP */
