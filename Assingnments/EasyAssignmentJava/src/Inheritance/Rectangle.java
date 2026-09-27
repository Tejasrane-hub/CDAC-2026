package Inheritance;

public class Rectangle {
	double length;
	double breadth;
	
	Rectangle(double len,double bre){
		length = len;
		breadth = bre;
		
	}
	
	void printArea() {
		System.out.println("Area Is : " + (length * breadth));		
	}
	
	void printPerimeter() {
		System.out.println("Perimeter Is : " + (2 * (length + breadth)));		
	}
	
	public static void main(String args[]) {
		
		Rectangle rect = new Rectangle(10, 5);
		
		System.out.println("Rectangle : ");		
		rect.printArea();
		rect.printPerimeter();
		
		Square squ = new Square(5);
		
		System.out.println("Square : ");
		squ.printArea();
		squ.printPerimeter();
		
	}

}

class Square extends Rectangle {
	
	Square(double side){
		super(side, side);
	}
	
}
