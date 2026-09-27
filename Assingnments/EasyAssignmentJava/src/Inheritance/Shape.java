package Inheritance;

public class Shape {
	
	    void printShape(){
	        System.out.println("This Is Shape");
	    }
	    public static void main(String args[]) {
	        
	        Square1 squ = new Square1();
	        squ.printShape();
	        squ.printRectangle();
	        squ.printSquare();
	    }
	        
	}
	class Rectangle2 extends Shape {
	    void printRectangle(){
	        System.out.println("This Is Rectangular Shape ");
	    }
	}
	class Circle extends Shape {
	    void printCircle(){
	        System.out.println("This Is Circular Shape ");
	    }
	}
	class Square1 extends Rectangle2 {
	    void printSquare(){
	        System.out.println("Square Is a rectangle ");
	}
	

}
