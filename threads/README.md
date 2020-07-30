# Threads

Threads are used in order to allow for parallel processing to occur in a single process. 

Even though threads.h is part of C11, it is still recommended to use something more portbale such as pthreads.h.

In order to prevent deadlocks and data races, it is important to know where you are locking and unlocking mutexes. A deadlock will occur if you hold a current lock and then tried to aquire another lock that is held by a different thread. If that thread then tries to acquire the lock you have, we will hit a deadlock. A data race occurs when we update a shared resource without locking  it.

The following program is the challenge for the Threads section in Udemy's Advanced C Programming course.

[Home](..)
