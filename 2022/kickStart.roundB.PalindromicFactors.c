#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int n){
    int compare = 0;
    for(int i = n; i > 0; i /= 10){
        compare = compare*10 + i % 10;
    }

    return compare==n;
}

bool isAFactorOfB(int a, int b){
    return b%a == 0;
}

int main(){
    int num_tests;

    scanf("%d", &num_tests);

    int tests[num_tests];

    for(int i = 0; i < num_tests; i++){
        scanf("%d", &tests[i]);
    }

    for(int i = 0; i < num_tests; i++){
        int num_palidromos = 0;

        int n = tests[i];

        for(int x = 1; x <= n; x++){
            if(isAFactorOfB(x, n))  if(isPalindrome(x)) num_palidromos++;
        }

        printf("Case #%d: %d\n", i+1, num_palidromos);
    }

    return 0;
}