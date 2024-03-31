import src.IPrototype;
import src.config.Configuration;
import src.config.UiConfig;
import src.config.enums.Ui;
import src.config.enums.Quality;
import src.manager.Pair;
import src.manager.PrototypeManager;

public class Main
{
    public static void main(String[] args) {
        PrototypeManager manager = new PrototypeManager(
            new Pair<String, IPrototype>(
                "Mac",
                new Configuration(new UiConfig(Ui.Mac, Quality.Good), false)
            ),
            new Pair<String, IPrototype>(
                "CLI",
                new Configuration(new UiConfig(Ui.None, Quality.Low), true)
            )
        );
    
    
        IPrototype configuration = manager.get("Mac");
    }
}