package Classes;

public class Rectangle {
	double length;
	double breadth;
	
	Rectangle(double a, double b){
		length = a;
		breadth = b;
	}
	
	double area() {
		return length * breadth;
	}
	
	public static void main(String args[]) {
		
		Rectangle rectangle1 = new Rectangle(4,5);
		System.out.println("Area Of Rectangle 1 : " + rectangle1.area());
		
		Rectangle rectangle2 = new Rectangle(5,8);
		System.out.println("Area Of Rectangle 2 : " + rectangle2.area());
	}

}
