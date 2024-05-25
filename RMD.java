class Base
{
    public int A,B;
    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
    public void Gun()
    {
        System.out.println("Inside Base Gun");
    }
    public void Sun()
    {
        System.out.println("Inside Base Sun");
    }
    public void Run()
    {
        System.out.println("Inside Base Run");
    }
}

class Derived extends Base
{
    public int X,Y;
    public void Gun()
    {
        System.out.println("Inside Derived Gun");
    }
    public void Run()
    {
        System.out.println("Inside Derived Run");
    }
    public void Mun()
    {
        System.out.println("Inside Derived Mun");
    }
}

class RMD
{
    public static void main(String A[])
    {
        Base bobj = new Derived();

        dobj.Fun();     // Base fun
        dobj.Gun();     // Derived Gun
        dobj.Sun();     // Base Sun
        dobj.Run();     // Derived Run
        dobj.Mun();     // (Error) Not Allowed
    }
}