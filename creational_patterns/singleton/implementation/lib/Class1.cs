using lib.register_by_label;

class Class1 : ISingleton
{
    public override void something()
    {
        Console.WriteLine($"c1 {att++}");
    }

    private int att = 1;

    private Class1()
    {}

    private static Class1 instance = new Class1();

    public static Class1 getInstance()
    {
        return instance;
    }
}