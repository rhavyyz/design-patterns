namespace lib.register_by_label;

using System.Collections.Generic;

abstract class ISingleton
{

    public abstract void something();

    protected  ISingleton() {}

    private static Dictionary<string, ISingleton>  dict = new Dictionary<string, ISingleton>();

    public static void register(string label, ISingleton singleton)  
    {
        dict.Add(label, singleton);
    }

    public static ISingleton get(string label)
    {
        return dict[label];
    }

}