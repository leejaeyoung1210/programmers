#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    
    int ship = n*12000;
    int drink = k*2000;
        
    int answer = ship+drink;
    if(n>=10)
    {
    answer -= (n/10)*2000;
    };

    
    return answer;
}