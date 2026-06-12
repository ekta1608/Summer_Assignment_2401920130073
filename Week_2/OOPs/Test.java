package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {

    public static void main(String[] args) {

        
        Veena ven = new Veena();
        ven.play();

        Saxophone s = new Saxophone();
        s.play();

        Playable pl;

        pl = new Veena();
        pl.play();

        pl = new Saxophone();
        pl.play();
    }
}
