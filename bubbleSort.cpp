// bubble sort

#include <iostream>

int main(){

    int itr, n, i;

    int a[] = {2,4,7,8,3,0,1};

    n = sizeof(a)/sizeof(int);

    for(itr = 1; itr <= n-1; itr++){

        for(i=0; i<n; i++){

            if(a[i] > a[i+1]){
                std::swap(a[i],a[i+1]);
            }

        }

    }

    std::cout << "The sorted array is: \n";
    for(i=0; i<n; i++){
        std::cout << a[i] << " ";
    }

    return 0;
}
