// Calculate execution time merge sort
#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;


int main(){
    auto start = high_resolution_clock::now();
   
    
// print 10000000 hello world
    for (int i = 0; i < 100; i++){
        cout << "Hello World" << endl;
    }




    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
    return 0;
}
