package Lab_2;
import java.util.*; 
public class Program_4 
{
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of matrices");
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[][] ar = new int [n][m];
        int[][] arr= new int [n][m];
        int[][] res= new int [n][m];
        System.out.println("Enter the elements of 1st matrix");
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m;j++)
                ar[i][j] = sc.nextInt();
        }
        System.out.println("Enter the elements of 2nd matrix");
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                arr[i][j] = sc.nextInt();
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                System.out.print(ar[i][j] + arr[i][j] + " ");
            System.out.println();
        }
            
    }
}