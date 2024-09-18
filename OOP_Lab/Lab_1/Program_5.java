package Lab_1;
import java.util.*;
public class Program_5 
{
	static int sum(int n)
	{
		int sum = 0;
		while(n>0)
		{
			int digit = n%10;
			sum = (sum)+ digit;
			n=n/10;
		}
		return sum;
	}
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int value, sum;
		System.out.println("Enter a number");
		value  = sc.nextInt();
		sum = sum(value);
		System.out.println("Sum of the digits of the number is "+ sum);
	}
}
