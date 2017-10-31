//Names: Ajit Vijayakumar & Shu Yang
//Date: 10/31/2017
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

int main() {
    void showIDs(int, string);

    int childPid = fork();

    if (childPid == 0) {
        showIDs(childPid, string("I am the child"));
        exec
    }
    else if (childPid > 0) {
//        sleep(10);
        showIDs(childPid, string("I am the parent"));
    }
    else
        cout << "fork was not successful" << endl;

    return 0;
}

void showIDs(int childPid, string msg) {
    cout << msg << " (pid=" << getpid()
         << ", ppid=" << getppid()
	 << ", child=" << childPid << ")" << endl;
}
