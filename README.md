# Enqueue-and-Dequeue
Enqueue and dequeue are two essential operations in the queue data structure, which follows the First In First Out (FIFO) principle.

Enqueue operation is used to add a new element to the end or the rear of the queue. This operation is also known as "insert" or "push". When an element is enqueued, it becomes the last element of the queue, and all the elements that were enqueued before it remain in the queue ahead of it.

Dequeue operation is used to remove and retrieve the front element or the first element that was added to the queue. This operation is also known as "delete" or "pop". When an element is dequeued, the element that was enqueued first is removed from the queue, and all the other elements move one position forward in the queue.

To perform enqueue operation in a queue, we typically use a function that takes the new element to be added as a parameter. Before adding the new element, we check if the queue is full or not, and if it is full, we return an error or print an appropriate message. If the queue is not full, we add the new element to the rear of the queue.

Similarly, to perform dequeue operation in a queue, we use a function that removes and retrieves the front element of the queue. Before removing the front element, we check if the queue is empty or not, and if it is empty, we return an error or print an appropriate message. If the queue is not empty, we remove the front element and return its value.

In summary, enqueue and dequeue are fundamental operations that are used to add new elements to the end of the queue and remove elements from the front of the queue, respectively.
