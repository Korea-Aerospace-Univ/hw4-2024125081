#include <stdio.h>

int main()
{
    int answer;
    int what;
    int count = 0;
    
    scanf("%d", &answer);
    
    do
    {
        scanf("%d", &what);
        count++;
        
    if (answer > what) {
        printf("%d보다 낮습니다\n", what);
    }
    else if (answer < what) { printf("%d보다 높습니다\n", what); }
    else { printf("%d 정답입니다\n", what); }
    }
    while (what != answer);
    printf("시도횟수는 %d회\n", what);
    
    return 0;
    
}
