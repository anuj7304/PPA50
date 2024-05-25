
class StringCompare
{
    public static void main(String arg[])
    {
        String s1 = "Hello";
        String s2 = "Demo";
        String s3 = new String("Hello");
        String s4 = "Hello";

        if(s1 == s4)
        {
            System.out.println("s1 and s4 are Same");
        }
        if(s1 == s3)
        {
            System.out.println("s1 and s3 are Same");
        }

        if(s1.equals(s3))
        {
            System.out.println("s1 and s3 are same usimng equals method");
        }
    }
}