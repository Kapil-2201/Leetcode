class Solution {
    public boolean isVowel(char c)
    {
        if(c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u'|| c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U')
        return true;
        return false;
    }

    public String reverseVowels(String s) {
        char[] ch = s.toCharArray();
        int left = 0;
        int right = ch.length-1;
        while (left < right) {
            while(left < right && !isVowel(ch[left]))
            left++;
            while(left < right && !isVowel(ch[right]))
            right--;
            if(left<right){
                char temp = ch[left]; 
                ch[left] = ch[right];
                ch[right] = temp;
                right--;
                left++;
            }
        }
        s = new String(ch);
        return s;
    }
}