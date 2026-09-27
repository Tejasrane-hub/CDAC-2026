package Classes;

public class Triangle {
	double side1;
	double side2;
	double side3;
	
	Triangle(double a, double b, double c){
		side1 = a;
		side2 = b;
		side3 = c;
	}
	
	double calculatePerimeter() {
		return side1 + side2 + side3;		
	}
	
	double calculateArea() {
		return 0.5 * side1 * side2;
	}
	
	public static void main(String args[]) {
		Triangle triangle = new Triangle(3,4,5);
		
		System.out.println("Area Of Triangle : "+ triangle.calculateArea());
		System.out.println("Perimeter Of Triangle : " + triangle.calculatePerimeter());
	}

}
