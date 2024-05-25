public class Assignment29_9 
{
    public static void main(String Arg[])
    {
        try
        {   
            int maxLength = 0;
            for (String str : Arg) 
            {
                int length = str.length();
                if (length > maxLength) 
                {
                    maxLength = length;
                }
            }
        }
        catch (Exception obj)
        {}
        
        System.out.println("Length of the largest word is: " +maxLength);
    }
}
