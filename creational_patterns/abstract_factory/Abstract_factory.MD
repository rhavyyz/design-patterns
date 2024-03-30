# Concept

The idea is to provide interfaces for objects that can be grouped in families and other interface, the factory, that provide all other interfaces grouped in a family.
So, after defining all those interfaces, foreach different family is created a concrete class, so, like this to switch the family of objects you provide is just necessary to switch the factory instance.

# Consequences

- \+ Switch between famlies of products is very easy
- It promotes consistency among objects 
- \- It is pretty hard to start providing new objects

