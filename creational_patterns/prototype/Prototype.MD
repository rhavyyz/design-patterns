# Concept

Sometimes is necessary to make copies of objects, and considering the use of encapsulation and objects as interfaces instead of concrete classes it can end up beeing a impossible. It happens if you delegate the responsability of cloning to someone outside the internal object context, but passing to the object the responsability of cloning itself makes everything quite easy.

# Concequences

- With prototype is possible to configure application with classes dynamicaly
- Specifying new objects by changing its values is viable because of the clonability
- Specifying new objects by changing its structure is viable because of the clonability and the use of an interface 
- The code complexity scales a lot with object composing 