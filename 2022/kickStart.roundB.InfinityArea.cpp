#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
    int num_tests;
    cin >> num_tests;
    int** tests = (int**)malloc(sizeof(int**)*num_tests);

    for(int i = 0; i < num_tests; i++){
        tests[i] = (int*)malloc(sizeof(int)*3);
        int aux;
        cin >> tests[i][0];
        cin >> tests[i][1];
        cin >> tests[i][2];
    }

    for(int i = 0; i < num_tests; i++){
        int raio = (double)tests[i][0];
        int a = tests[i][1];
        int b = tests[i][2];
        float area = 0;

        bool right = false;

        area = (double)M_PI*pow(raio, 2);

        while(raio > 0){
            if(right){
                raio = raio / b;
            }else{
                raio = raio * a;
            }
            area += (float)M_PI*pow(raio, 2);

            right = (bool)(right^1);            // alterna valor de right
        }

        cout << "Case #" << i+1 << ": " << area << endl;
    }

    return 0;
}