class Solution {
    public:
      int myAtoi(char *s) {
          // Your code here
          while(*s ==' ')s++;
          
          int sign =1;
          if(*s =='-' || *s =='+'){
              if(*s =='-')sign =-1;
              s++;
          }
          long result =0;
          while(*s >= '0' && *s <='9'){
              result = result*10+(*s - '0');
          
          
          
          if(sign ==1 && result> INT_MAX) return INT_MAX;
          if(sign == -1 && -result<INT_MIN) return INT_MIN;
          
          s++;
          }
          return (int)(sign * result);
      }
  };