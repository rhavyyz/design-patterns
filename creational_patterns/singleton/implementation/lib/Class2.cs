using lib.register_by_label;

class Class2 : ISingleton
{
    public override void something()
    {
        Console.WriteLine($"c2 {att++}");
    }

    private int att = 1;

    private Class2()
    {}

    private static Class2 instance = new Class2();

    public static Class2 getInstance()
    {
        return instance;
    }
}