
interface Circle
{
     float Radius = 10.5f;
     float PI  = 3.14f;

     float Area();
     float Circumference();
}

class Marvellous implements Circle
{
    public  float Area()
    {
        return PI * Radius * Radius;
    }
    public float Circumference()
    {
        return 2 * PI * Radius;
    }
}

class Blueprint
{
    public static void main(String A[])
    {
        Marvellous mobj = new Marvellous();

        System.out.println("Area is : "+mobj.Area());
        System.out.println("Circumference is : "+mobj.Circumference());

        System.out.println("Value of Radius is : "+Circle.Radius);
        System.out.println("Value of PI is : "+Circle.PI);

        //Circle.PI = 7.12;
    }
}