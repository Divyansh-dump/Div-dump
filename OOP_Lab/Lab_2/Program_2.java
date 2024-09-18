package Lab_2;
import java.util.*; 
public class Program_2 
{
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array");
        int N = sc.nextInt();
        int[] ar = new int [N];
        for(int i=0; i<N; i++)
            ar[i] = i+1;
        for(int i: ar)
            System.out.print(i + " ");
    }
}