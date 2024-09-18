package lab_8;
import java.util.*;
class Stack { 
    static int max; 
    private int[] stack; 
    private int top; 
    
    public Stack(int max) { 
        this.max = max; 
        this.stack = new int[max]; 
        this.top = -1;
    }
    
    public void push(int value) throws Stack_full_exception { 
        if(top>=max-1) {
            throw new Stack_full_exception("Stack is full");
        }
        stack[++top] = value; 
    }
    
    public int pop() throws Stack_empty_exception { 
        if(top <0) { 
            throw new Stack_empty_exception("Stack is empty");
        }
        return  stack[top--];
    }
    
    @Override 
    public String toString() { 
        String result = "["; 
        for(int i=0; i<= top; i++) { 
            result += stack[i];
            if(i<top) { 
                result += ", ";
            }
        }
        result +="]";
        return result;
    }
    
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in);
        Stack stack = new Stack(3);
        while(true) { 
            System.out.println("Enter a choice:");
            System.out.println("Menu");
            System.out.println("1) Push\n2) Pop\n3) Exit");
            int ch = sc.nextInt(); 
            
            switch (ch) { 
                case 1: 
                    System.out.println("Enter a value to be pushed");
                    int n = sc.nextInt(); 
                    try {
                        stack.push (n); 
                    }
                    catch (Stack_full_exception e) { 
                        System.out.println(e.getMessage()); 
                    }
                    break;
                    
                case 2: 
                    try { 
                        stack.pop(); 
                    } 
                    catch (Stack_empty_exception e) { 
                        System.out.println(e.getMessage()); 
                    }
                    break;
                    
                case 3: 
                    return;
            }
            System.out.println();
        }
    }
}

class Stack_full_exception extends Exception { 
    public Stack_full_exception(String message) { 
        super(message); 
    }
}

class Stack_empty_exception extends Exception { 
    public Stack_empty_exception(String message) { 
        super(message);
    }
}
                    
                        
                        
                    
 
    