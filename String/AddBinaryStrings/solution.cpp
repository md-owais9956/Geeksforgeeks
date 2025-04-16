class Solution {
    public:
      string addBinary(string& s1, string& s2) {
          // your code here
          string result = "";
          int i = s1.length() -1, j=s2.length() -1,carry = 0;
          
          while (i>=0 || j>= 0||carry){
              int sum = carry;
              
              if(i>= 0)sum+=s1[i--] - '0';
              if(j>= 0)sum+= s2[j--] -'0';
              
              carry = sum/2;
              result += (sum%2) + '0';
          }
          reverse(result.begin(),result.end());
          
          int pos = result.find_first_not_of('0');
          if(pos!= string::npos)
          return result.substr(pos);
          else
          return "0";
      }
  };