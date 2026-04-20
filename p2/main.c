int main()
{
    int n;
    char str[101];         //101만큼 생성할 수 있음

    
    scanf("%d", &n);
    scanf("%s", str);
    
    
   int max_eng = 0, cur_eng = 0;     
   int max_num = 0, cur_num = 0;
   
   for (int i = 0; i<n; i++) {
      char c = str[i];
      
      if (c >= 'a' && c<='z') {
          cur_eng ++;
          if (cur_eng > max_eng) {
              max_eng = cur_eng;
          }
      } else {
          cur_eng = 0;
      }
      
      if (c >= '0' && c<= '9') {
          cur_num ++;
          if (cur_num > max_num) {
              max_num = cur_num;
          }
      } else {
          cur_num = 0;
      }
   }
  
   printf("%d\n", max_eng);
   printf("%d\n", max_num);
}
