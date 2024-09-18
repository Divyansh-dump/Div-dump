package Lab_3;
import java.util.*;
public class STUDENT 
{
	String sname;
	int[] marks_array;
	int total; 
	double avg;
	
	static void assign(STUDENT obj)
	{
		obj.sname = "Divyansh";
		obj.marks_array = new int []{90, 85, 60, 95, 70};
	}
	
	static void compute(STUDENT obj)
	{
		obj.total = obj.marks_array[0] + obj.marks_array[1] + obj.marks_array[2] + obj.marks_array[3] + obj.marks_array[4];
		obj.avg = obj.total/ 5;
	}
	
	static void display(STUDENT obj)
	{
		System.out.println("Name: "+ obj.sname);
		System.out.print("Marks:");
		for(int i=0; i<5; i++) {
			System.out.print(" "+ obj.marks_array[i]);
		}
		System.out.println("");
		System.out.println("Total: "+ obj.total);
		System.out.println("Average: "+ obj.avg);
	}
	
	public static void main(String[] args)
	{
		STUDENT obj = new STUDENT();
		assign(obj);
		compute(obj);
		display(obj);
	}
}
