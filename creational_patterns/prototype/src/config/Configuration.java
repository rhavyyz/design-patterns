package src.config;

import src.IPrototype;

public class Configuration implements IPrototype<Configuration>{
    private UiConfig UiConfigation;
    private boolean CLI_mode;

    public Configuration(UiConfig UiConfigation , boolean CLI_mode) 
    {
        this.UiConfigation =UiConfigation;
        this.CLI_mode = CLI_mode;
    }

    public Configuration clone()
    {
        return new Configuration(UiConfigation.clone(), CLI_mode);
    }

    public UiConfig getUiConfigation() {
        return UiConfigation;
    }
    public boolean getCLI_mode()
    {
        return CLI_mode;
    }
}
