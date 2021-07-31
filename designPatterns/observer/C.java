package observer;

public class C implements Observer{
    ConcreteSubject subject;
    public C(ConcreteSubject subject) {
        this.subject = subject;
        this.subject.registerObserver(this);
    }
    @Override
    public void update(int value) {
        System.out.println("B class update, value : " + value);
    }
}
