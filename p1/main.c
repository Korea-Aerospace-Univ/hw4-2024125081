#include <stdio.h>

int main()
{
    int answer = 10;
    int question = 0;
    int count = 0;
    
    scanf("%d", &answer);
    
    do {
        scanf("%d", &question);
        count++;
        
    if (answer > question) {
        printf("%d<?\n", question);
    }
    else if (answer < question) { 
        printf("%d>?\n", question); 
    } 
    else {
        printf("%d==?", question); 
        printf("시도횟수는 %d회\n", count);
    }
    while (question != answer);
    
    
    return 0;
    
}
