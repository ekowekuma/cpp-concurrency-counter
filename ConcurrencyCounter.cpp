#include <iostream>
#include <thread>

using namespace std;

// Thread 1 function
void countUp() {
    for (int counter = 0; counter <= 20; counter++) {
        cout << "Counting up: " << counter << endl;
    }
}

// Thread 2 function
void countDown() {
    for (int counter = 20; counter >= 0; counter--) {
        cout << "Counting down: " << counter << endl;
    }
}

int main() {


    thread thread1(countUp);

    // Wait until thread 1 finishes
    thread1.join();

    
    thread thread2(countDown);


    thread2.join();

    cout << "Counting complete." << endl;

    return 0;
}