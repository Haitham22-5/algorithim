#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;
long long itfact(long long n) {
    if(n == 0)
        return 1;
    for(long long i=n - 1; i > 0; i--)
        n *= i;
    return n;
}

long long recract(long long n){
    if(n == 0){
        return 1;
    }
    return n * recract(n - 1);
}

int main(){
    long long n = 100;
    auto start_time = high_resolution_clock::now();
    // itfact(n);
    recract(n);
    auto stop = high_resolution_clock:now();
    auto duration = high_resolution_clock:now(stop - start);
    cout << "Time taken by function call : "<< duration.count() << endl;
    return 0;
}