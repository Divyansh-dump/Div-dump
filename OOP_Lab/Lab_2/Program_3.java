package Lab_2;
import java.util.*; 
public class Program_3 
{ 
    static boolean isPrime(int n, int ar)
    {
        boolean isPrime = true;

		for(int j=2;j<ar;j++)
		{
			if(ar%j == 0)
			{
				isPrime = false;
				break;
			}
		}
		return isPrime;
    }

    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array");
        int n = sc.nextInt();
        int[] ar = new int [n];
        System.out.println("Enter the elements of array");
        for(int i=0; i<n; i++)
            ar[i] = sc.nextInt();
            for(int i=0; i<n; i++)
                if(isPrime(n,ar[i]))
                    System.out.print(ar[i]+" ");
    }
}