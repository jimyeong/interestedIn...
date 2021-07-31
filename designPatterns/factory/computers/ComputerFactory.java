package factory.computers;

import factory.computers.models.Computer;
import factory.computers.models.PC;

public class ComputerFactory {
    public static Computer getComputer(String type, String ram, String hdd, String cpu){
        if("PC".equalsIgnoreCase(type)){
            return new PC(ram, hdd, cpu);
        }else if("Server".equalsIgnoreCase(type)){
            return new Server(ram, hdd, cpu);
        }
        return null;
    }
}
