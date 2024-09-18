package Lab_1;
import java.util.*;
public class Program_4 
{
	static boolean isPrime(int n)
	{
		boolean isPrime = true;
		for(int i=2;i<n;i++)
		{
			if(n%i == 0)
			{
				isPrime = false;
				break;
			}
		}
		return isPrime;
	}
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int n;
		System.out.println("Enter a number");
		n = sc.nextInt();
		boolean prime = isPrime(n);
		if(prime)
			System.out.println(n+" is prime");
		System.out.println("Prime numbers between 2 and "+ n+ " are: ");
		for(int i=2; i<=n;i++)
			if(isPrime(i))
				System.out.print(i+ ",");
		
		
	}
}
