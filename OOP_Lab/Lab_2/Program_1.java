package Lab_2;
import java.util.*; 
public class Program_1 
{
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array");
        int n = sc.nextInt();
        int[] ar = new int [n];
        System.out.println("Enter the elements of array");
        for (int i =0; i<n; i++)
            ar[i]= sc.nextInt();
        for(int i = 0; i<n/2; i++)
        {
            int temp = ar[i];
            ar [i] = ar[n-i-1]; 
            ar[n-i-1] = temp;
        }
        System.out.println("Array in reverse order is: ");
        for(int i = 0; i<n; i++)
            System.out.print( ar[i] + " ");
    }
}
