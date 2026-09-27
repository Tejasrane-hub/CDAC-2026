package Classes;

public class Employee {
	
	double salary;
	int hours;
	
	void getInfo(double s, int hrs) {
		salary = s;
		hours = hrs;
	}
	
	double addSalary() {
		if(salary < 500) {
			return salary = salary + 10.0;
		}
		else return salary;
	}
	
	double addWork() {
		if(hours > 6) {
			return salary = salary + 5.0;
		}
		else return salary;
	}
	
	void displaySalary() {
		System.out.println("Final Salary : " + salary );
	}
	
	public static void main(String args[]) {
		
		Employee employee1 = new Employee();
		Employee employee2 = new Employee();
		
		employee2.getInfo(400,7);
		
		employee2.addSalary();
		employee2.addWork();
		
		employee1.displaySalary();
		employee2.displaySalary();		
	}
}
