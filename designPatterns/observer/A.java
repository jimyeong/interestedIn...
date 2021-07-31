package observer;

import java.io.Console;

public class A implements Observer{
    ConcreteSubject subject;

    public A(ConcreteSubject subject) {
        this.subject = subject;
        subject.registerObserver(this);
    }
    @Override
    public void update(int value) {
        System.out.println("A Class update, value :" + value);
    }
}
