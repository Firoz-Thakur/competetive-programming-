class Circle
{ 
	 private double radius;
	 
	 void setRad(double r)
	 {
		 radius=r;
		 
	 }
	 double getRad()
	 {
		return radius;
	 }
	 void display()
	 {
		System.out.println(3.14 *radius * radius);
	        System.out.println(2 *3.14*radius);
       } 
}
public class demo2
{

	public static void main(String[] args)
{
		// TODO Auto-generated method stub
	   Circle ar=new Circle();
	   Circle ar1=new Circle();
	   ar.setRad(5.3);
	   ar1.setRad(5.4);
	   System.out.println(ar.getRad());
	   System.out.println(ar1.getRad());
           ar.display();
           ar1.display();
   
}

}
