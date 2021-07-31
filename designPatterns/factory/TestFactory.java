package factory;

import factory.computers.ComputerFactory;
import factory.computers.models.Computer;
import factory.users.User;
import factory.users.UserFactory;

public class TestFactory {
    public static void main(String[] args) {
        // abstract/interface 로 타입을 선언했기 떄문에, 상속한 클래스는 다 사용할 수가 있다.
        Computer pc = ComputerFactory.getComputer("pc", "2 GB", "500 GB", "2.4 GHz");
        Computer server = ComputerFactory.getComputer("pc", "2 GB", "500 GB", "2.4 GHz");

        User mentor = UserFactory.getUser("mentor",  "jimmy", "5445-3425");
        User mentee = UserFactory.getUser("mentee",  "Jesse", "4153-9912");

        System.out.println("Factory PC config: " + pc);
        System.out.println("Factory PC config: " + server);


        System.out.println("Factory User config " + mentor  );
        System.out.println("Factory User config " + mentee  );
    }
}


// 이것을 어떤 상황에서 사용하면 좋은가
// loose coupling
// Computer의 종류가 늘어난다고 하더라도, 이미 구현된 PC 와 Server의 스펙이 변경된다고 하더라도, 타입 선언이 Abstract 클래스로 되어있기 때문에,
// 따로 코드를 변경할 필요가 없어진다.
// 클라이언트와 구현객체들 사이의 추상화를 제공한다.

