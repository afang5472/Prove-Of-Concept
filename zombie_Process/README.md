This is an example of the simplest linux zombie process prove of concept.

# Key points:

1. When a process exit, kernel send SIGCHLD to its parent.

2. The message is asynchronous 

3. Parent can ignore the signal, or supply a signal handler.

# What will happen if invokes wait() or waitpid() ?

1. If all children are running, blocked.

2. Iff one of the children exits, wait will return.

3. If there's no any child process, return errorno.


