//
//  main.cpp
//  ellenek2_3
//
//  Created by Ellen Kirsh on 9/19/21.
//

#include <iostream>
using namespace std;

void T(int n){
    for(int i = 10; i<=n; i++)
        cout << "T(" << i << ") = " << (i*(i+1)/2) << endl;
}
int main() {
    int n = 25;
    T(n);
    return 0;
}
