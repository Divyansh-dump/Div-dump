package Lab_5;
import java.util.*; 

public class Employee {
	static String s;
	
	
	static void formatName()
	{
		String sCopy = s.trim(); 
		sCopy = sCopy + " ";
		String word = ""; 
		String res = "";
		for(int i =0; i<sCopy.length(); i++)
		{
			char ch = sCopy.charAt(i);
			if(ch == ' ') {
				res = res + word.substring(0, 1).toUpperCase() + word.substring(1).toLowerCase() + " ";			
				word = "";
			}
			else {
				word = word + ch;
			}
		}
		
		s = res;
	}
	
//			if(s.charAt(i) != ' ') {
//				s.substring(0,1).toUpperCase();
//				s.substring(1).toLowerCase();
//			}
//			if(s.charAt(i) == ' ')
//			{
//				s.substring(i+1,i+2).toUpperCase();
//				s.substring(i+2).toLowerCase();
//			}

	
	public static void main (String [] args) 
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a string");
		s = sc.nextLine(); 
		formatName();
		System.out.println("Employee Name : " + s);
	}

}
