class Solution {
    public int evalRPN(String[] arr) {
        Stack<Integer> stack = new Stack<>();
        int n = arr.length;
        for(String c: arr){
            if(c.equals("+") || c.equals("-") || c.equals("/") || c.equals("*")){
                int num2 = stack.pop();
                int num1 = stack.pop();
                if(c.equals("+")){
                stack.push(num1+num2);
                }
                if(c.equals("-")){
                stack.push(num1-num2);
                }
                if(c.equals("/")){
                stack.push(num1/num2);
                }
                if(c.equals("*")){
                stack.push(num1*num2);
                }
            }
            else{
                stack.push(Integer.valueOf(c));
            }

        }
    return stack.pop();
    }
}