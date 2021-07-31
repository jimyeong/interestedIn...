package observer;

public class B implements Observer{
    ConcreteSubject subject;

    public B(ConcreteSubject subject) {
        this.subject = subject;
        this.subject.registerObserver(this);
        
    }

    @Override
    public void update(int value) {
        System.out.println("B class update, value : " + value);
    }
}
