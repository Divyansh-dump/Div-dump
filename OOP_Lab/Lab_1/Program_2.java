package Lab_1;
import java.util.*;
public class Program_2 {
	static int reverse(int n) {
		int reverse =0;
		while(n>0) {
			int digit = n%10;
			reverse = (reverse * 10)+ digit;
			n=n/10;
		}
		return reverse;
	}
	public  static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int value, rev;
		System.out.println("Enter a number");
		value  = sc.nextInt();
		rev = reverse(value);
		System.out.println("Reverse of the number is "+ rev);
		if(rev == value)
			System.out.println(value + " is a palindrome");
		else
			System.out.println(value+ " is not a palindrome");
		
	}
}
