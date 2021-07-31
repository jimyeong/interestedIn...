package observer;

import java.util.ArrayList;
import java.util.List;

public class ConcreteSubject implements Subject{
    List<Observer> observerList = new ArrayList<>();
    int value;

    public ConcreteSubject() {
        value =0;
    };
    @Override
    public void registerObserver(Observer o) {
        observerList.add(o);
    }
    @Override
    public void removeObserver(Observer o) {
        observerList.remove(o);
    }

    @Override
    public void notifyObserver(int value) {
        for(Observer o : observerList){
            o.update(value);
        }
    };
    public void setValue(int value){
        this.value = value;
        notifyObserver(value);
    }
}
