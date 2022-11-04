class Solution {
public:
 bool isVowel(char c)
{
    return (c=='a' || c=='A' || c=='e' ||
            c=='E' || c=='i' || c=='I' ||
            c=='o' || c=='O' || c=='u' ||
            c=='U');
}
    string reverseVowels(string s) {
       int st=0,e=s.length()-1;
       while(st<e){
           if(!isVowel(s[st])){
               st++;
               continue;
           }
           if(!isVowel(s[e])){
               e--;
               continue;
           }
           swap(s[st],s[e]);
           st++;
           e--;
       }    
       return s;
   }
};