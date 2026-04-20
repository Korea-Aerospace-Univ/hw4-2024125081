#include <stdio.h>

int main() {
    int answer = 10;                 //정답값 변수 초기화
    int question = 0;                  //추측값 변수 초기화
    int count = 0;                       // 시도 횟수 
    
    scanf("%d", &answer);              // 정답값 정수 입력받기 
    
    do {                                          //추측값 정수 입력받기 
        scanf("%d", &question); 
        count++;                                    // 시도 횟수 증가   
        
        if (answer > question) {                         //정답값이 추측값보다 클 경우 실행
            printf("%d<?\n", question);
        }
        else if (answer < question) {                      //정답값보다 추측값이 클 경우 실행
            printf("%d>?\n", question); 
        } 
        else {                                               //else이니 두 경우 모두 아닌 정답값과 추측값이 같으면 실행
            printf("%d==?\n", question); 
            printf("%d\n", count);                              
        }
    }
    while (question != answer);                                   //정답값과 추측값이 같지 않을 경우 반복해서 실행
    
    
    return 0;
    
}
