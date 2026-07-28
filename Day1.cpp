#include <iostream>
using namespace std;


// Q 1.
// int factorial(int n) {
//     if(n ==0){
//         return 1;
//     }

//     return n * factorial(n-1);
// }

// int main() {
//     cout << factorial(5) << endl;
//     return 0;
// }


// Q2. 


int SumNumber(int n){
    if (n == 1){
        return 1;
    }
   
    return n+SumNumber(n-1);

}

int main(){
    cout<<"sum:"<<SumNumber(10);
    return 0;
}

