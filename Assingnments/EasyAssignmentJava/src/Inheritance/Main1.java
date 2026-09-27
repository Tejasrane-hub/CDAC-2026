package Inheritance;

class Parent{
	
	void parentMethod() {
		System.out.println("This Is Parent class ");
	}
}
class Child extends Parent{
	
	void childMethod() {
		
		System.out.println("This IS Child Class ");		
	}
}

public class Main1 {
	
	public static void main(String args[]) {
		
		Parent parentObject = new Parent();
		Child childObject = new Child();
		
		parentObject.parentMethod();
		childObject.childMethod();
		childObject.parentMethod();
	}	

}
