using lib.register_by_label;
using lib.register_by_type;

ISingleton.register("c1", Class1.getInstance());
ISingleton.register("c2", Class2.getInstance());

Registry.register(Class1.getInstance());
Registry.register(Class2.getInstance());


ISingleton s1 = ISingleton.get("c1"),
           s2 = ISingleton.get("c2");

Class1 c1 = Registry.get<Class1>();
Class2 c2 = Registry.get<Class2>();


s1.something();
s1.something();
c1.something();

Console.WriteLine("\n\n");

s2.something();
s2.something();
s2.something();
s2.something();
c2.something();