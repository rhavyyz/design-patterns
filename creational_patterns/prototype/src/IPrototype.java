package src;

public interface IPrototype<T extends IPrototype<T>> {
    public T clone();
}
