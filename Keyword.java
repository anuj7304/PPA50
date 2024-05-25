
class Base
{
    public int A,B;

    public Base()
    {
        System.out.println("Inside Base Constructor");
        this.A = 10;
        this.B = 20;
    }
    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
}

class Derived extends Base
{
    public int X,Y;

    public Derived(int i , int j)
    {
        super();
        System.out.println("Inside Derived Constructor");
        this.X = i;
        this.Y = j;
    }
    public void Gun()
    {
        System.out.println("Inside gun of Derived");
        super.Fun();
        System.out.println("Value of A : "+super.A);
        System.out.println("Value of X : "+this.X);

    }
}
class Keyword
{
    public static void main(String Arg[])
    {
        Derived dobj = new Derived(11,21);
        dobj.Gun();
    }
}