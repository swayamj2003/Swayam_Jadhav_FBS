import java.util.Stack;

class Parenthesis {

    static boolean isMatching(char open, char close) {
        if (open == '(' && close == ')') return true;
        if (open == '{' && close == '}') return true;
        if (open == '[' && close == ']') return true;
        return false;
    }

    // make method static OR call using object
    static boolean checkExp(String S) {
        Stack<Character> st = new Stack<>();

        for (int i = 0; i < S.length(); i++) {
            char ch = S.charAt(i);

            // opening bracket
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            // closing bracket
            else if (ch == ')' || ch == '}' || ch == ']') {

                if (st.isEmpty())
                    return false;

                char top = st.pop();
                if (!isMatching(top, ch))
                    return false;
            }
        }
        return st.isEmpty();
    }

    public static void main(String[] args) {
        String expr = "{(a+b)*c}";

        if (checkExp(expr))
            System.out.println("Balanced Parenthesis");
        else
            System.out.println("Not Balanced Parenthesis");
    }
}
