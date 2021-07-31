package observer;

public interface Subject {
    // 옵저버를 제거, 등록, 알림을 날리는 함수
    void registerObserver(Observer o);
    void removeObserver(Observer o);
    void notifyObserver(int value);

}
