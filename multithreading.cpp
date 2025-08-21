#include <iostream>
#include <thread>
using namespace std;

void func()
{
    cout << "hello world" << endl;
}

int main()
{
    thread t(func);
    cout << t.get_id() << endl;
    t.join();
    cout << "main thread finished";
    return 0;
}