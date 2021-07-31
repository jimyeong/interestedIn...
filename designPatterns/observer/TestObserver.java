package observer;

public class TestObserver {
    public static void main(String[] args) {
        ConcreteSubject concreteSubject = new ConcreteSubject();
        A observerA = new A(concreteSubject);
        B observerB = new B(concreteSubject);
        C observerC = new C(concreteSubject);
        concreteSubject.setValue(10);

    }
}
