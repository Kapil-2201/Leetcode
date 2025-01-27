class Solution {
    public String reverseWords(String s) {
    Stack<String> stack = new Stack<>();
    s = s.trim();
    String [] words = s.split("\\s+");
    String [] word = new String[words.length];
    for(String w:words){
        stack.push(w);
    }
    int i = 0;
    while(!stack.isEmpty()){
        word[i++] = stack.pop();
    }

        
        return String.join(" ",word);
    }
}