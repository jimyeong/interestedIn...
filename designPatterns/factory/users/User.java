package factory.users;

abstract public class User {
    abstract public String getPosition();
    abstract public String getName();
    abstract public String getPhoneNumber();
    @Override
    public String toString(){
        return "position, " + getPosition() +  ", name: " + getName() + ", phone number: " + getPhoneNumber();
    }
}
