package src.config;

import src.IPrototype;
import src.config.enums.Quality;
import src.config.enums.Ui;

public class UiConfig implements IPrototype<UiConfig> {
    
    private Ui UiType;
    private Quality UiQuality;

    public UiConfig(Ui UiType, Quality UiQuality) {
        this.UiType = UiType;
        this.UiQuality = UiQuality;
    }

    public UiConfig clone()
    {
        return new UiConfig(UiType, UiQuality);
    }

    public Quality getUiQuality() {
        return UiQuality;
    }
    public Ui getUiType() {
        return UiType;
    }
}
