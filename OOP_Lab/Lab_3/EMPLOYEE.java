package Lab_3;

import java.util.Scanner;

public class EMPLOYEE 
{
	String Ename;
	int Eid;
	int Basic;
	double DA;
	double Gross_Sal;
	double Net_Sal;
	double IT;
	
	static void read(EMPLOYEE obj)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Name: ");
		obj.Ename = sc.nextLine();
		System.out.println("Employee ID: ");
		obj.Eid = sc.nextInt();
		System.out.println("Basic Salary: ");
		obj.Basic = sc.nextInt();	
	}
	
	static void compute_net_sal(EMPLOYEE obj)
	{
		obj.DA = 0.52 * obj.Basic; 
		obj.Gross_Sal = obj.Basic + obj.DA;
		obj.IT = 0.3 * obj.Gross_Sal;
		obj.Net_Sal = obj.Gross_Sal - obj.IT;
	}
	
	static void display(EMPLOYEE obj)
	{
		System.out.println("Name: "+ obj.Ename);
		System.out.println("E-ID: "+ obj.Eid);
		System.out.println("Salary: "+ obj.Basic);
		System.out.println("Gross Salary: "+ obj.Gross_Sal);
		System.out.println("Incom Tax Filed: "+ obj.IT);
		System.out.println("Net Salary: "+ obj.Net_Sal);
	}
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Number of Employees: ");
		int N = sc.nextInt();
		EMPLOYEE obj[] = new EMPLOYEE[N];
		for(int i=0; i<N; i++) 
		{
			obj[i]= new EMPLOYEE();
			read(obj[i]);
			compute_net_sal(obj[i]);
			display(obj[i]);
		}
	}
}
