package Lab_1;
import java.util.*;
public class Program_1 {
	static void nestedMax (int x, int y, int z){
		if(x>y)
			if(x>z)
				System.out.println(x +" is the largest number");
		if(y>x)
			if(y>z)
				System.out.println(y +" is the largest number");
		if(z>x)
			if(z>y)
				System.out.println(z +" is the largest number");
	}
	static void ladderMax (int x, int y, int z){
		if(x>y && x>z)
			System.out.println(x +" is the largest number");
		else if(y>x && y>z)
			System.out.println(y +" is the largest number");
		else if(z>x && z>y) 
			System.out.println(z +" is the largest number");
	}

	
	public static void main(String []args) {
		Scanner sc = new Scanner(System.in);
		int[] a= new int[3];
		System.out.println("Give 3 values to compare");
		
		for(int i=0; i<3; i++){
			a[i] = sc.nextInt();
		}
		int x= a[0];
		int y= a[1];
		int z= a[2];
		System.out.println("Using nested if loop");
		nestedMax(x,y,z);
		System.out.println("Using ladder if-else-if loop");
		ladderMax(x,y,z);
	}

}
