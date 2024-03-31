package src.manager;

import java.util.HashMap;
import java.util.Map;
import src.IPrototype;
import src.manager.Pair;


public class PrototypeManager {

    private Map<String, IPrototype> storage = new HashMap<String, IPrototype>();

    public PrototypeManager(Pair<String, IPrototype> ...pairs) {
        for(Pair<String, IPrototype> pair : pairs)
        {
            put(pair);
        }
    }

    public void put(Pair<String, IPrototype> pair)
    {
        storage.put(pair.first, pair.second.clone());
    }
    public void put(String key, IPrototype value)
    {
        storage.put(key, value);
    }
    public IPrototype get(String Key)
    {
        return storage.get(Key);
    }
}
