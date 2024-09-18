package Lab_1;
import java.util.*;
public class Program_3 
{
	static int fact(int n)
	{
		int fact=1;
		for(;n>0;n--)
			fact*=n;
		return fact;
	}
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int n,fact;
		System.out.println("Enter a number");
		n= sc.nextInt();
		fact = fact(n);
		System.out.println("Hence factorial of "+n+ " is " + fact);
		int N,R,ncr;
		System.out.println("Enter values of n and r");
		N= sc.nextInt();
		R= sc.nextInt();
		ncr= fact(N)/(fact(R)*(fact(N-R)));
		System.out.println(N + "C" +R +" is "+ ncr);
		
		
	}
}
