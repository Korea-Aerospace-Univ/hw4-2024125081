#include <stdio.h>

int main()
{
    int answer;
    int question;
    int count = 0;
    
    scanf("%d", &answer);
    
    do
    {
        scanf("%d", &question);
        count++;
        
    if (answer > question) {
        printf("%d>%d\n", answer, question);
    }
    else if (answer < question) { printf("%d<%d\n", answer, question); }
    else { printf("%d==%d", answer, question); }
    }
    while (what != answer);
    printf("시도횟수는 %d회\n", question);
    
    return 0;
    
}
