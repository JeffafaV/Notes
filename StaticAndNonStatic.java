class FirstOuterClass {
    static class StaticClass {
        void display() {
            System.out.println("Static nested class");
        }
    }
}

class SecondOuterClass {
    // non-static nested classes are also called inner classes
    class NonStaticClass {
        // can't have static methods in inner non-static class
        void display() {
            System.out.println("Non-static nested class");
        }
    }
}

class ThirdOuterClass {
    static class StaticClass {
        static void display() {
            System.out.println("Static nested class with static method");
        }
    }
}

// https://stackoverflow.com/questions/2671496/when-to-use-static-methods
// https://www.geeksforgeeks.org/nested-classes-java/
// https://stackoverflow.com/questions/70324/java-inner-class-and-static-nested-class
// https://www.geeksforgeeks.org/difference-between-static-and-non-static-method-in-java/
// The purpose of this program is to understand the syntax of calling methods of 
// static nested classes and inner classes
public class StaticAndNonStaticClasses
{
    void displayNonStaticMethod() {
        System.out.println("Non-static method");
    }
    
    static void displayStaticMethod() {
        System.out.println("Static method");
    }
    
	public static void main(String[] args) {
	    FirstOuterClass.StaticClass first = new FirstOuterClass.StaticClass();
	    first.display();
	    
	    SecondOuterClass secondOuter = new SecondOuterClass();
	    SecondOuterClass.NonStaticClass secondInner = secondOuter.new NonStaticClass();
	    secondInner.display();
	    
	    ThirdOuterClass.StaticClass.display();
	}
}
