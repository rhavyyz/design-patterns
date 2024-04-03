namespace lib.register_by_type;

using System.Collections.Generic;

class Registry
{

    private static Dictionary<Type, dynamic> storage = new Dictionary<Type, dynamic>();


    public static void register<T>(T instance) where T : notnull
    {
       storage.Add(typeof(T), instance);
    }

    public static T get<T>()
    {
        return (T) storage[typeof(T)];
    }

    private Registry()
    {}

    // private static Registry instance = new Registry();

    // public static Registry getInstance()
    // {
    //     return instance;
    // }
}